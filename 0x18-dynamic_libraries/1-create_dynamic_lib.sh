#!/bin/bash
directory=$(dirname "$0")
gcc -c -Wall -Werror -fpic "$directory"/*.c
gcc -shared -o "$directory/liball.so" "$directory"/*.o
rm "$directory"/*.o
