#!/bin/sh
echo "Enter Basics"
read basics
echo "Enter TA"
read ta
res=$(($basics + $ta))
bc -l <<< $res\+0.1\*$basics
