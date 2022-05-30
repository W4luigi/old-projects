#!/bin/bash

file=$(pwd)"/"$1
[[ $file = *".cpp" ]] && file=${file:0:-4}
file=$file".cpp"
source=$(pwd)"/template.cpp"
[[ $2 ]] &&  source2=$2
cp $source $file
# echo $source $file
