# syntax=docker/dockerfile:1.7

# Python USD AR — adds Apple's "Preliminary_" AR schemas on top of python-usd.
#
# These schemas (Preliminary_AnchoringAPI, Preliminary_Behavior, Preliminary_Trigger,
# Preliminary_Action, Preliminary_ReferenceImage, Preliminary_Text) come from Apple's
# USDZ Schemas for AR addendum and are still not upstreamed into OpenUSD, so they
# have to be code-generated and compiled into libusd at build time.
#
# See: https://developer.apple.com/documentation/arkit/usdz_schemas_for_ar
ARG USD_VERSION=26.05
FROM ghcr.io/plattar/python-usd:version-${USD_VERSION}

LABEL org.opencontainers.image.source="https://github.com/Plattar/python-usd-ar"
LABEL org.opencontainers.image.description="Pixar OpenUSD with Apple's Preliminary_* AR schemas compiled in"
LABEL org.opencontainers.image.licenses="Apache-2.0"
LABEL org.opencontainers.image.vendor="Plattar"

# USD_VERSION, USD_BUILD_PATH, USD_BIN_PATH, USD_LIB_PATH, USD_PLUGIN_PATH,
# PATH, LD_LIBRARY_PATH and PYTHONPATH are inherited from the python-usd base.

ENV USD_SCHEMA_FOLDER=usd_schemas

WORKDIR /usr/src/app

COPY ${USD_SCHEMA_FOLDER}/ /usr/src/app/${USD_SCHEMA_FOLDER}/

RUN set -eux; \
	apt-get update; \
	apt-get install -y --no-install-recommends \
		git \
		ca-certificates \
		build-essential \
		cmake \
		nasm \
		libxrandr-dev \
		libxcursor-dev \
		libxinerama-dev \
		libxi-dev; \
	rm -rf /var/lib/apt/lists/*; \
	git clone --branch "v${USD_VERSION}" --depth 1 https://github.com/PixarAnimationStudios/OpenUSD.git usdsrc; \
	# Drop the Apple schema package into the OpenUSD source tree
	cp -a /usr/src/app/${USD_SCHEMA_FOLDER}/usdInteractive/ usdsrc/pxr/usd/; \
	# Use the inherited usdGenSchema (from the python-usd base) to turn schema.usda
	# into C++ source. Done before re-running build_usd.py so the new sources get picked up.
	(cd usdsrc/pxr/usd/usdInteractive && usdGenSchema schema.usda .); \
	echo "add_subdirectory(usdInteractive)" >> usdsrc/pxr/usd/CMakeLists.txt; \
	# Rebuild USD into the same prefix. boost/tbb/oneTBB are already present and
	# get skipped by build_usd.py; only USD itself is recompiled (with the new schema).
	python3 usdsrc/build_scripts/build_usd.py \
		--no-examples \
		--no-tutorials \
		--no-imaging \
		--no-usdview \
		--no-draco \
		--no-materialx \
		${USD_BUILD_PATH}; \
	rm -rf usdsrc; \
	rm -rf /usr/src/app/${USD_SCHEMA_FOLDER}; \
	rm -rf \
		${USD_BUILD_PATH}/build \
		${USD_BUILD_PATH}/cmake \
		${USD_BUILD_PATH}/pxrConfig.cmake \
		${USD_BUILD_PATH}/share \
		${USD_BUILD_PATH}/src; \
	apt-get purge -y \
		git \
		build-essential \
		cmake \
		nasm \
		libxrandr-dev \
		libxcursor-dev \
		libxinerama-dev \
		libxi-dev; \
	apt-get autoremove -y; \
	apt-get autoclean -y; \
	rm -rf /var/lib/apt/lists/*
