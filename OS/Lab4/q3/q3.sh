#!/bin/sh
function_sort(){
param1=("${1}")
param2=("${2}")
param3=("${3}")
param4=("${4}")

declare -a strarray
i=1
for (( i=1;i<5;i++ ));do
strarray[i]=$param$i
done
echo "${strarray[@]}"
}

function_sort he llo wor lf
