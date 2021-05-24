#!/bin/sh

# push a local build into dockerhub
docker tag plattar/python-usd-ar:latest plattar/python-usd-ar:$1
docker push plattar/python-usd-ar:$1

# revert for future use
docker tag plattar/python-usd-ar:$1 plattar/python-usd-ar:latest