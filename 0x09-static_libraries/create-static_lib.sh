#!/bin/bash
C_FILES=$(find . -name "*.c")
for file in $C_FILES; do
	gcc -c $file
done
ar rcs liball.a *.o
rm *.o
