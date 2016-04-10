all:	main

main: main.o Candidate.o Voter.o results
	g++ main.o Candidate.o Voter.o -o main

main.o: main.cpp
	g++ -c main.cpp

Voter.o:  Voter.cpp
	g++ -c Voter.cpp

Candidate.o:  Candidate.cpp
	g++ -c Candidate.cpp
	
results:
	./pulldata.sh

clean:
	rm -f *.o main
