#!/bin/bash
gcc -Wall -FPIC -c *.c
gcc -shared -o liball.so *.c
