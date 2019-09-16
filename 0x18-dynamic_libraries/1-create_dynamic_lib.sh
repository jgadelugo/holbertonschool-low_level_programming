#!/bin/bash
gcc -Wall -fPIC -c *.c && gcc -shared -Wl,-soname,liball.so -o liball.so *.o
