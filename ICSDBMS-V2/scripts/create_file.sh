#!/bin/sh

if [ "$2" = "data/main" ]; 
then
cd $2
touch $1.dat
touch $1.stdat
exit 0
.
fi



