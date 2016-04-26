/*Voter class implementation in order to store information about each voter, including age, gender, dorm, party, and the candidate whom they are voting for *//
 
#include <iostream> 
#include <string>
#include "Voter.h" 
using namespace std; 

Voter::Voter() {} 

//set Age for the voter
void Voter::setAge(string ageVal) { 
	age = ageVal; 
}

//set gender for the voter 
void Voter::setGender(string genderVal) { 
	gender = genderVal; 
}

//set candidate the voter is voting for 
void Voter::setCandidate(string candidateVal) { 
	candidate = candidateVal; 
}

//set dorm for the voter
void Voter::setDorm(string dormVal) { 
	dorm = dormVal; 
}

//set the political party for the voter
void Voter::setParty(string partyVal) { 
	party = partyVal; 
}

//return the candidates name for the voter
string Voter::getCandidate(){
	return (candidate);
}

//return the voter's gender
string Voter::getGender(){
	return (gender);
}

//return the voter's dorm
string Voter::getDorm(){
	return (dorm);
}

//return the voter's age
string Voter::getAge(){
	return (age);
}

//return the voter's party 
string Voter::getParty() { 
	return (party); 
}

