#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -share d -o liball.so *.o
export LD_LIBRARY-PATH=.:$LD_LIBRARY_PATH
