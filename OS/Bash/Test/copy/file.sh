#!/bin/sh

echo "Enter file name"
read name

if test -e $name ;then
echo "yes"
fi

if [ -e $name ];then
echo "File exists"
else
echo "File not exists"
fi