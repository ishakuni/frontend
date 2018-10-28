FROM mhart/alpine-node:10
WORKDIR /usr/src
COPY package.json yarn.lock ./
RUN yarn install
COPY . .
RUN CI=true yarn test
RUN yarn build
RUN mv ./build /public

