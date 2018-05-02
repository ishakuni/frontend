FROM nginx:1.13-alpine

COPY build /usr/share/nginx/html
