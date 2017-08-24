#!/bin/sh

echo "Enter file name"
fname=("${1}")
cd ..
cd assets

echo "1.linecount 2.wordcount 3.charcount"
read opt
case $opt in
1)echo "linecount :"
wc -l $fname ;;
2)echo "wordcount:"
wc -w $fname ;;
3)echo "charcount:"
wc -c $fname ;;
*)echo "invalid choice"
esac
