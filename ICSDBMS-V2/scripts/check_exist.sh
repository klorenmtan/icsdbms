#!/bin/sh

FILE=$1;
cd data/main
if [ ! -f "$FILE" ]; then
    exit 0
	.
else
	exit 1
fi
