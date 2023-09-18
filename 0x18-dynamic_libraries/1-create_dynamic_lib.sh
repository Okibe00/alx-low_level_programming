#!/bin/bash
gcc -fpic -c *.c
gcc -fpic *.o -o liball.so -shared
