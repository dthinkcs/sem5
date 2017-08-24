#!/bin/sh
echo "inside second bash"
echo "enter a string"
read str
echo "enter file name"
read name
cd ..
cd $name
echo ""
find *$str*
