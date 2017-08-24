#!/bin/sh

cd ..
cd assets
echo "Available files"
ls -l
i=1;
while (($i!=0)); do
echo "Enter file to be deleted"
read fname
rm -i $fname
echo "Available files"
ls -l
echo "Delete more files?"
read ans
if [ "$ans" = "y" ];then
i=1
else
i=0
fi
done

