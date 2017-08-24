#!/bin/sh
echo "Enter Pattern"
read pattern

echo "1.Search Pattern 2.Delete Pattern 3. Exit"
read ip

case $ip in
1)echo "search:"
grep $pattern temp.txt;;
2)echo "delete"
sed -i -e 's/'$pattern'/''/g' temp.txt;;
3)echo "exit"
exit;;
esac
