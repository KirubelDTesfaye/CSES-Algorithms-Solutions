#!/bin/bash

FILE="1_weirdAlg/weirdAlg 2_missingNumber/missingNumber 3_Repetition/Repetitions 4_increasingArray/increasingArray
        5_permutations/permutations 6_numberSpiral/numberSpiral"

for x in $FILE
do
    if test -f $x; then
        echo "$x exist";
    else
        echo "$x does not exist"
    fi
done
