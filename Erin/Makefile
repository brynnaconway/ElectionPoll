all: results main

results: 
	./pulldata.sh
	
main: initial.h
	g++ main.cpp -o main
	
clean: 
	rm -f results.dat main
