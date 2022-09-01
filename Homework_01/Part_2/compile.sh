cd build_O0
cmake ../ -DCMAKE_CXX_FLAGS_RELEASE="-O0" && make
cd -
cd build_O3
cmake ../ && make
cd -