factorial () { 
    if (($1 == 1))
    then
        echo 1
        return
    else
        echo $(( $( factorial $(($1 - 1)) ) * $1 ))
    fi
}
factorial 5


#!/bin/bash
counter=$1 #first argument
factorial=1
while [ $counter -gt 0 ] #while counter > 0
do
   factorial=$(( $factorial * $counter ))
   counter=$(( $counter - 1 ))
done
echo $factorial