#!/bin/bash
cd src
gcc -c -Wall -Werror -fpic *.c -o ../build/*.o
cd ../build
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
