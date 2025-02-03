#!/bin/bash

pushd ..

# Use the macOS version of Premake5
Vendor/Binaries/Premake/macOS/premake5 --cc=clang --file=Build.lua gmake2

popd
