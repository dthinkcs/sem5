#!/bin/sh
echo "Enter extension"
read ext1
echo "Enter extension"
read ext2

cd .. 
x=`ls *$ext1`
for i in $x;do
	mv $i $ext2
done

