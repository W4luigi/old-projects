#!/bin/bash

file=$(pwd)/$1
[[ $file = *".cpp" ]] && file=${file:0:-4}
$(g++ $file.cpp -o $file) && (echo "Skompilowano plik $1" ; echo ; /.$file ; echo)
