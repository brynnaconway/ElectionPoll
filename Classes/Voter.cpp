#include <iostream> 
#include <string>
#include "Voter.h" 
using namespace std; 
/* temporary constructor for compiling purposes; actual constructor will set variables based on reading in from a spreadsheet file generated from a Google form. In a main function, there will be a loop that loops through the file line by line and creates a vector of Voter objects. Each time a line is read, a new Voter object will be created and the data from that line will be used to assign values to the Voter variables */
Voter::Voter() {
	//age = "20"; 
	//gender = "M"; 
	//candidate = "John Kasich";
	//dorm = "Duncan";
} 

void Voter::setAge(string ageVal) { 
	age = ageVal; 
}

void Voter::setGender(string genderVal) { 
	gender = genderVal; 
}

void Voter::setCandidate(string candidateVal) { 
	candidate = candidateVal; 
}

void Voter::setDorm(string dormVal) { 
	dorm = dormVal; 
}

void Voter::print(){
	cout << candidate << endl << age << endl << gender << endl << dorm << endl;
}
