#!/bin/bash

FILE="problem1/weirdAlg problem2/missingNumber problem3/Repetitions problem4/increasingArray
        problem5/permutations problem6/numberSpiral"

for x in $FILE
do
    if test -f $x; then
        echo "$x exist";
    else
        echo "$x does not exist"
    fi
done
