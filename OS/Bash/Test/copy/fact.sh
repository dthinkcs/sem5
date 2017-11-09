#!/bin/sh

factorial()
{
    if test $1 -le 1
    then
        echo 1
    else
        last=$(factorial $[$1-1])
        echo $(($1 * last))
    fi
}
factorial 5
