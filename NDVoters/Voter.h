/*Voter class which stores information about each voter, including name of candidate whom voter is voting for, voter's age, gender, dorm, and political party */

#include <iostream> 
#include <string> 
#ifndef VOTER_H
#define VOTER_H
using namespace std; 

class Voter { 
	public: 
		Voter(); //constructor
		void setAge(string ageVal); //stores age for voter
		void setGender(string genderVal); //stores gender for voter
		void setCandidate(string candidateVal ); //stores the candidate whom voter is voting for 
		void setDorm(string dormVal); //stores the dorm for the voter
		void setParty(string partyVal); //stores the party of the voter
		string getCandidate(); //returns the candidate
		string getGender(); //returns the gender
		string getDorm(); //returns the dorm
		string getAge(); //returns the age
		string getParty(); //returns the party 
	private: 
		string age; 
		string gender; 
		string candidate;
		string dorm; 
		string party; 
};

#endif 
		 
