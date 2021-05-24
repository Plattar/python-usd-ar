#!/bin/sh

# Nukes all built docker images
docker stop plattar-usd-ar
docker rm -v plattar-usd-ar
docker rmi plattar/python-usd-ar:latest --force