// Candidate class to store total votes for each different candidate 

#include <iostream>
#include <string>  
#include <vector>
#include "Voter.h"
#ifndef CANDIDATE_H
#define CANDIDATE_H


class Candidate { 
	public:
		Candidate(string, vector<Voter *>); // consructor that passes in the vector of all of the voters 
        Candidate();
		int getTotal(); 
        int getTotal2();
        void countVotes(int, vector<Voter *>);
        void setAgeChoice(string);
        void setPartyChoice(string);
        void setGenderChoice(string);
        void setDormChoice(string);

	private: 
		int total_votes;
        int total_votes2;
		string name; // name determines which candidate the object corresponds to 
        string ageChoice; // age dropdown selection
        string partyChoice; // party dropdown selection 
        string genderChoice; // gender dropdown selection 
        string dormChoice; // dorm dropdown selection 
};

#endif 
