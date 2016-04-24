#include <iostream> 
#include <string> 
#ifndef VOTER_H
#define VOTER_H
using namespace std; 

class Voter { 
	public: 
		Voter();
		void setAge(string ageVal);
		void setGender(string genderVal);
		void setCandidate(string candidateVal ); 
		void setDorm(string dormVal);
		void setParty(string partyVal); 
		string getCandidate();
		string getGender();
		string getDorm();
		string getAge();
		string getParty(); 
	private: 
		string age; 
		string gender; 
		string candidate;
		string dorm; 
		string party; 
};

#endif 
		 
