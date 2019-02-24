#!/bin/bash
set -xe

yum install -y wget
basedir=`pwd`

# install gcc (required for reasonml)
cd /tmp
wget https://dmmcy0pwk6bqi.cloudfront.net/gcc-4.8.5.tgz
tar xvf gcc-4.8.5.tgz 2>/dev/null
export PATH=/tmp/bin:$PATH
export LD_LIBRARY_PATH=/tmp/lib:/tmp/lib64:$LD_LIBRARY_PATH
export CPATH=/tmp/include
export LIBRARY_PATH=/tmp/lib

cd $basedir
yarn
yarn build
