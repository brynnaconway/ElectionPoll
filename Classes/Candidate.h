#include <iostream>
#include <string> 
#include <deque> 
#ifndef CANDIDATE_H
#define CANDIDATE_H

class Candidate { 
	public:
		Candidate();
	private: 
		int female_votes;
		int male_votes; 
		int college_votes; 
		int total_votes;
};

#endif 
