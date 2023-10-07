#!/bin/bash

FILE_CMAKE=CMakeLists.txt

if [ ! -f "$FILE_CMAKE" ]; then
	echo "$FILE_CMAKE does not exists"
	exit
fi

cmake .
cmake --build . --config Releas

