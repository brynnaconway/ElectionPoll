#include <iostream>
#include <string>  
#include <vector>
#include "Voter.h"
#ifndef CANDIDATE_H
#define CANDIDATE_H

class Candidate { 
	public:
		Candidate(string, vector<Voter *>);
	private: 
		int female_votes;
		int male_votes; 
		int college_votes; 
		int total_votes;
		string name;
};

#endif 
