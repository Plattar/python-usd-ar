# Create a base from a pre-compiled version of USD tools
# More info @ https://github.com/Plattar/python-usd
# Unlike the python-usd container, python-usd-ar also contains the Schema
# Definitions for ARKit and is useful for generating USDZ files with various
# AR Features.
FROM plattar/python-usd:version-21.05-slim-buster

ENV USD_ALT_BUILD_PATH="/usr/src/app/usd"

LABEL MAINTAINER PLATTAR(www.plattar.com)

WORKDIR /usr/src/app

COPY /ARSchemaDefinitions /usr/src/app/ARSchemaDefinitions

RUN apt-get update && apt-get install -y --no-install-recommends \
	git \
	build-essential \
	cmake \
	nasm \
	libglew-dev \
	libxrandr-dev \
	libxcursor-dev \
	libxinerama-dev \
	libxi-dev \
	zlib1g-dev && \
	rm -rf /var/lib/apt/lists/* && \
	git clone https://github.com/PixarAnimationStudios/USD usdsrc && \
	cd usdsrc && git checkout tags/v${USD_VERSION} && cd ../ && \
	cp -a /usr/src/app/ARSchemaDefinitions/UsdInteractive/ usdsrc/extras/usd/examples/ && \
	cp -a /usr/src/app/ARSchemaDefinitions/UsdPhysics/ usdsrc/extras/usd/examples/ && \
	echo "add_subdirectory(UsdInteractive)" >> usdsrc/extras/usd/examples/CMakeLists.txt && \
	echo "add_subdirectory(UsdPhysics)" >> usdsrc/extras/usd/examples/CMakeLists.txt
#python usdsrc/build_scripts/build_usd.py -v --examples --no-usdview ${USD_ALT_BUILD_PATH}