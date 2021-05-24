# Create a base from a pre-compiled version of USD tools
# More info @ https://github.com/Plattar/python-usd
# Unlike the python-usd container, python-usd-ar also contains the Schema
# Definitions for ARKit and is useful for generating USDZ files with various
# AR Features.
FROM plattar/python-usd:version-21.05-slim-buster

LABEL MAINTAINER PLATTAR(www.plattar.com)

WORKDIR /usr/src/app

COPY /ARSchemaDefinitions /usr/src/app/ARSchemaDefinitions