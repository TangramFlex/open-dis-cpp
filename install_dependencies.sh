# Get premake5
mkdir tmp
cd tmp/
wget https://github.com/premake/premake-core/releases/download/v5.0.0-alpha6/premake-5.0.0-alpha6-src.zip -O premake.zip
unzip premake.zip
cd premake-5.0.0-alpha6/build/gmake.unix
make config=release
cd ../../..
mv premake-5.0.0-alpha6/bin/release/premake5 ../premake5 # Move premake5 to root dir

# Download and build SDL2 from source
wget http://libsdl.org/release/SDL2-2.0.9.tar.gz
tar -xvf SDL2-2.0.9.tar.gz
pushd SDL2-2.0.9/
./configure --prefix=/usr && make && sudo make install
popd

# Run sdl2-config for debugging -- protentially remove this
sdl2-config --cflags --libs

# Download and build SDL2_net as well from source
wget https://www.libsdl.org/projects/SDL_net/release/SDL2_net-2.0.1.tar.gz
tar -xvf SDL2_net-2.0.1.tar.gz
pushd SDL2_net-2.0.1/
./configure --prefix=/usr && make && sudo make install
popd