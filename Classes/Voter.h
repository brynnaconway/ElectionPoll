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
<<<<<<< HEAD
		void setCandidate(string candidateVal ); 
		void setDorm(string dormVal); 
=======
		void setCandidate(string candidateVal);
		void setDorm(string dormVal);
		void print();
>>>>>>> 18aed1c095c13afa078003e9dfbd7699cd31b3a2
	private: 
		string age; 
		string gender; 
		string candidate;
		string dorm; 
};

#endif 
		 
