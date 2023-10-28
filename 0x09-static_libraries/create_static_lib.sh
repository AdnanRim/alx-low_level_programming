#!/bin/bash

# Compile all source files to object files
for file in *.c; do
    gcc -c "$file"
done

# Create the library and add all object files
ar rcs liball.a *.o

# Ranlib to index the library
ranlib liball.a
