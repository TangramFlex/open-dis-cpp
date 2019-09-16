# open-dis-cpp
A C++ implementation of the Distributed Interactive Simulation (DIS) protocol.
Initially generated with [xmlpg](https://github.com/open-dis/xmlpg).

[![Travis (Linux) Build Status](https://travis-ci.org/open-dis/open-dis-cpp.svg?branch=master)](https://travis-ci.org/open-dis/open-dis-cpp)
[![CodeDocs status](https://codedocs.xyz/open-dis/open-dis-cpp.svg)](https://codedocs.xyz/open-dis/open-dis-cpp/)
Note those indicators ^ are referring to the main repo not this fork. A TODO item is to get them referring to this build.

## Building Open DIS

Open DIS uses [premake5](http://premake.github.io/) to build platform specific projects. Download it and make sure it's available on your path, or specify the path to it.

The example code that uses OpenDIS requres [SDL2](https://libsdl.org/index.php) to be installed as a system wide library.

### Linux

1. Run `premake5 gmake`
2. Run `make OpenDIS config=release`to make OpenDIS library only. (`make config=release` or `make all config=release` to make example sender and receiver.
3. Find libOpenDIS.so in ./Build/Release/

### Windows

1. Run `premake5 vs2015`
1. Open the solution and build.

## Developer Docs

The latest doxygen docs for the Open DIS master branch can be found [here](https://codedocs.xyz/open-dis/open-dis-cpp/).
