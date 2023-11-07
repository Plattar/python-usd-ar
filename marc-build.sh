docker buildx create --name plattar_python_usd_ar_builder
docker buildx use plattar_python_usd_ar_builder
docker buildx build --push --tag plattar/python-usd-ar:version-$1-slim-bullseye --platform linux/amd64,linux/arm64 --file Dockerfile .