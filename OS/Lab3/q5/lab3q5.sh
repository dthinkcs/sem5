#!/bin/sh
echo "Enter extension"
read ext
echo "Enter file name"
read fname
x=`ls *$ext`
for i in $x;do
	mv $i $fname
done
