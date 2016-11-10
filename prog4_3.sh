#!/bin/bash
echo "Assignment #4-3, Ernest Viola, ernest.viola@gmail.com"
gcc prog4_1.c -llua -lm -ldl -L lua-5.3.3/src/ -I lua-5.3.3/src/
if [ "`./a.out $1`" == "`cat $2`" ]
##if [ "$one" == "$two" ]
then echo "Passed Test"
else echo "Failed Test"
fi
