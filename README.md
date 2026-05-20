[![Twitter: @plattarglobal](https://img.shields.io/badge/contact-@plattarglobal-blue.svg?style=flat)](https://twitter.com/plattarglobal)
[![License](https://img.shields.io/badge/license-Apache%202.0-blue.svg?style=flat)](LICENSE)

_Python USD AR_ is a Docker container built on top of [python-usd](https://github.com/Plattar/python-usd) that adds Apple's [USDZ AR Schemas](https://developer.apple.com/documentation/arkit/usdz_schemas_for_ar) (`Preliminary_AnchoringAPI`, `Preliminary_Behavior`, `Preliminary_Trigger`, `Preliminary_Action`, `Preliminary_ReferenceImage`, `Preliminary_Text`). These schemas are not part of upstream OpenUSD, so they are code-generated and compiled into `libusd` at image build time.

Pre-built images are published to the GitHub Container Registry: [`ghcr.io/plattar/python-usd-ar`](https://github.com/Plattar/python-usd-ar/pkgs/container/python-usd-ar). Multi-arch manifests are produced for both `linux/amd64` and `linux/arm64`.

```sh
docker pull ghcr.io/plattar/python-usd-ar:latest
# or pin a specific OpenUSD version
docker pull ghcr.io/plattar/python-usd-ar:26.05
```

Looking for the standard _Python USD_ images without Apple USDZ Schema Definitions? Check out the [python-usd](https://github.com/Plattar/python-usd) repository.

### Building a new release

Builds are produced by `.github/workflows/publish.yml`. There are two ways to trigger a build:

1. **Manual dispatch** — run the workflow from the Actions tab and supply an `usd_version` (e.g. `26.05`). The matching `ghcr.io/plattar/python-usd:version-<usd_version>` base image must already exist. Optionally override `image_tag` or tick `tag_latest`.
2. **Git tag** — pushing a tag (e.g. `git tag 26.05 && git push origin 26.05`) triggers a build that uses the tag name as both the OpenUSD version and the image tag, and also publishes `:latest`.

### Acknowledgements

This tool relies on the following open source projects.

-   [Apple USDZ Schemas](https://developer.apple.com/documentation/arkit/usdz_schemas_for_ar)
-   [Plattar Python USD](https://github.com/Plattar/python-usd)
