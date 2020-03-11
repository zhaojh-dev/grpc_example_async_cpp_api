#!/usr/bin/env bash

export LC_ALL=C
cd "$(dirname "$0")" || exit 1

echo "now generate protobuf and grpc source code, protoc version: " && protoc --version

protoc -I=./ --cpp_out=. --grpc_out=. --plugin=protoc-gen-grpc=/usr/local/bin/grpc_cpp_plugin ./greeting.proto
