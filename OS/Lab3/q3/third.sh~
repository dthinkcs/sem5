#!/bin/sh
echo " "
echo "inside third script"
echo "replacing files inside OS"
cd OS
IFS=$'\n'
for x in $(find -n "*.txt");do
mv "$x" "{x%.txt} .text"
done
