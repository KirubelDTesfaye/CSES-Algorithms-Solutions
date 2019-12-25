#!/bin/sh
output: problem1/weirdAlg.o problem2/missingNumber.o problem3/Repetitions.o problem4/increasingArray.o problem5/permutations.o problem6/numberSpiral.o
	
problem1/weirdAlg.o: problem1/weirdAlg.cpp
	g++ -std=c++11 -o2 -c problem1/weirdAlg.cpp -o problem1/weirdAlg
	
problem2/missingNumber.o: problem2/missingNumber.cpp
	g++ -std=c++11 -o2 -c problem2/missingNumber.cpp -o problem2/missingNumber
	
problem3/Repetitions.o: problem3/Repetitions.cpp
	g++ -std=c++11 -o2 -c problem3/Repetitions.cpp -o problem3/Repetitions
	
problem4/increasingArray.o: problem4/increasingArray.cpp
	g++ -std=c++11 -o2 -c problem4/increasingArray.cpp -o problem4/increasingArray
	
problem5/permutations.o: problem5/permutations.cpp
	g++ -std=c++11 -o2 -c problem5/permutations.cpp -o problem5/permutations
	
problem6/numberSpiral.o: problem6/numberSpiral.cpp
	g++ -std=c++11 -o2 -c problem6/numberSpiral.cpp -o problem6/numberSpiral
	

check:
	chmod +x check.sh
	./check.sh

distcheck:
	gcc --version
clean:
	rm problem1/weirdAlg
	rm problem2/missingNumber
	rm problem3/Repetitions
	rm problem4/increasingArray
	rm problem5/permutations
	rm problem6/numberSpiral
