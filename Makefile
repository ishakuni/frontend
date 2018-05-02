VERSION := $(shell git describe --always)
GCR_PROJECT := ishakuni-stag
GCR_REGION := eu.gcr.io

IMAGE_TAG = ${GCR_REGION}/${GCR_PROJECT}/frontend:${VERSION}

.PHONY: build
build:
	yarn build
	docker build -t ${IMAGE_TAG} .

upload: build
	docker push ${IMAGE_TAG}
