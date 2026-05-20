#!/bin/sh

# Local multi-arch build helper. Usage: ./marc-build.sh <usd-version>
# Publishes to ghcr.io/plattar/python-usd-ar. Requires `docker login ghcr.io` first
# and the matching ghcr.io/plattar/python-usd:version-<usd-version> base to exist.

set -eu

if [ "$#" -ne 1 ]; then
	echo "usage: $0 <usd-version>" >&2
	exit 1
fi

USD_VERSION="$1"
IMAGE="ghcr.io/plattar/python-usd-ar:version-${USD_VERSION}"

docker buildx create --name plattar_python_usd_ar_builder --use 2>/dev/null \
	|| docker buildx use plattar_python_usd_ar_builder
docker buildx build \
	--push \
	--tag "${IMAGE}" \
	--build-arg "USD_VERSION=${USD_VERSION}" \
	--platform linux/amd64,linux/arm64 \
	--file Dockerfile .
