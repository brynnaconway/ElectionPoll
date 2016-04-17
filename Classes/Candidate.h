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
        void countVotes(vector<Voter *>);
        void setAgeChoice(string);

	private: 
		int total_votes;
		string name;
        string ageChoice;
};

#endif 
