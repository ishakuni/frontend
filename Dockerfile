FROM node:8 as base

WORKDIR /usr/src

COPY . .
RUN yarn && yarn build

FROM scratch
COPY --from=base /usr/src/public /public
