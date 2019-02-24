#!/bin/bash
set -x

yarn global add now wait-for-now
wait-for-now
now alias ishakuni.com --token $ZEIT_API_TOKEN
now alias www.ishakuni.com --token $ZEIT_API_TOKEN
