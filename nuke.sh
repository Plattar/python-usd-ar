#!/bin/sh

# Nukes the local python-usd-ar container and image
docker stop plattar-usd-ar 2>/dev/null || true
docker rm -v plattar-usd-ar 2>/dev/null || true
docker rmi ghcr.io/plattar/python-usd-ar:latest --force
