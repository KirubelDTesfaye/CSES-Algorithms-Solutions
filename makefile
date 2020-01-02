#!/bin/sh
output: 1_weirdAlg/weirdAlg.o 2_missingNumber/missingNumber.o 3_Repetition/Repetitions.o 4_increasingArray/increasingArray.o 5_permutations/permutations.o 6_numberSpiral/numberSpiral.o 8_bitStrings/bitStrings.o
	
1_weirdAlg/weirdAlg.o: 1_weirdAlg/weirdAlg.cpp
	g++ -std=c++11 -o2 -c 1_weirdAlg/weirdAlg.cpp -o 1_weirdAlg/weirdAlg
	
2_missingNumber/missingNumber.o: 2_missingNumber/missingNumber.cpp
	g++ -std=c++11 -o2 -c 2_missingNumber/missingNumber.cpp -o 2_missingNumber/missingNumber
	
3_Repetition/Repetitions.o: 3_Repetition/Repetitions.cpp
	g++ -std=c++11 -o2 -c 3_Repetition/Repetitions.cpp -o 3_Repetition/Repetitions
	
4_increasingArray/increasingArray.o: 4_increasingArray/increasingArray.cpp
	g++ -std=c++11 -o2 -c 4_increasingArray/increasingArray.cpp -o 4_increasingArray/increasingArray
	
5_permutations/permutations.o: 5_permutations/permutations.cpp
	g++ -std=c++11 -o2 -c 5_permutations/permutations.cpp -o 5_permutations/permutations
	
6_numberSpiral/numberSpiral.o: 6_numberSpiral/numberSpiral.cpp
	g++ -std=c++11 -o2 -c 6_numberSpiral/numberSpiral.cpp -o 6_numberSpiral/numberSpiral
	
8_bitStrings/bitStrings.o: 8_bitStrings/bitStrings.cpp
	g++ -std=c++11 -o2 -c 8_bitStrings/bitStrings.cpp -o 8_bitStrings/bitStrings
	
check:
	chmod +x check.sh
	./check.sh

distcheck:
	gcc --version
clean:
	rm 1_weirdAlg/weirdAlg
	rm 2_missingNumber/missingNumber
	rm 3_Repetition/Repetitions
	rm 4_increasingArray/increasingArray
	rm 5_permutations/permutations
	rm 6_numberSpiral/numberSpiral
	rm 8_bitStrings/bitStrings
