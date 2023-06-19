#!/bin/bash
gcc -c -fPIC *.c # Compile all .c files into .o files
gcc -shared -o liball.so *.o # Create the dynamic library
rm *.o # Clean up .o files
