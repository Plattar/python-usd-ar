#!/bin/sh

# push a local build into dockerhub
docker tag plattar/python-usd-ar:latest plattar/python-usd-ar:version-$1-slim-bullseye
docker push plattar/python-usd-ar:version-$1-slim-bullseye

# revert for future use
docker tag plattar/python-usd-ar:version-$1-slim-bullseye plattar/python-usd-ar:latest