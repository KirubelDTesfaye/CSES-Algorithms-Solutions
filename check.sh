#!/bin/bash

FILE="1_weirdAlg/weirdAlg 2_missingNumber/missingNumber 3_Repetition/Repetitions 4_increasingArray/increasingArray
        5_permutations/permutations 6_numberSpiral/numberSpiral 8_twoSets/twoSets.cpp 9_bitStrings/bitStrings 10_trailingZeros/trailingZeros"

for x in $FILE
do
    if test -f $x; then
        echo "$x exist";
    else
        echo "$x does not exist"
    fi
done
