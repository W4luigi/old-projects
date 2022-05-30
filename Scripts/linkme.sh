#!/usr/bin/env bash

base_file=$(cat $1)
for file in $(ls $2); do
	check_file=$(cat $2/$file)
	if [ "$check_file" = "$base_file" ]; then
		rm $2/$file
		ln $1 $2/$file
		echo "Created hard link in $2: $file"
 	fi
done
