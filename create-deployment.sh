#!/bin/bash
set -xe

url=`now --regions bru --name ishakuni-frontend --token $zeit_token`
now alias ishakuni.com $url --token $zeit_token
now alias www.ishakuni.com $url --token $zeit_token
