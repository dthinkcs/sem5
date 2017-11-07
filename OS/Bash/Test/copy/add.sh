#!/bin/sh

echo "Enter a and b"
read a
read b
c=$(($a + $b))
echo $c

echo "operation"
read opr
c=$(($a $opr $b))
echo "result " $c

res=`echo "$a$opr$b" | bc`

echo $res


if [ "$b"="2" ];then
echo "b is 2"
fi