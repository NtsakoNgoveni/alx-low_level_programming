#!/bin/bash
gcc -fPIC -c *.c
gcc -share d -o liball.so *.o
