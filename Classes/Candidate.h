#include <iostream>
#include <string>  
#include <vector>
#include "Voter.h"
#ifndef CANDIDATE_H
#define CANDIDATE_H


class Candidate { 
	public:
		Candidate(string, vector<Voter *>);
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
		string name;
        string ageChoice;
        string partyChoice;
        string genderChoice;
        string dormChoice;
};

#endif 
