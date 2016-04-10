#include <iostream>
#include <string> 
#include <vector>
#include "Voter.h"
#include "Candidate.h" 

/* temporary constructor for compiling purposes; values for variables will actually be based on */
Candidate::Candidate(string n, vector<Voter *> voter) {
	name = n;
	total_votes = 0;
	for (int i = 0 ; i<voter.size(); i++){
		if (name.compare( voter[i]->getCandidate() ) == 0){ //they match 
			total_votes++; //increment the total number of votes for this candidate 
		}
	}
	cout << total_votes << endl;
}
