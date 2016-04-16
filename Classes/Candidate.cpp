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

int Candidate::getTotal(){
	return total_votes;
}

int Candidate::countVotes(vector<Voter *> voter){
	total_votes = 0;
	int GENDER = 1;
	int AGE = 1;
	int DORM = 0;
	int PARTY = 1;
	string genderChoice = "Male";
	string ageChoice = "30";
	string dormChoice = "Farley";
	string partyChoice = "Democratic Party";
	for (int i=0; i < voter.size(); i++){
		if (name.compare( voter[i]->getCandidate() ) == 0){
			//cout << "party choice: " << partyChoice << " get: " << voter[i]->getParty();
			if (GENDER == 1 && genderChoice.compare( voter[i]->getGender() ) != 0){
				continue;
			}
			if (AGE == 1 && ageChoice.compare( voter[i]->getAge() ) !=0){
				continue;
			}
			if (DORM == 1 && dormChoice.compare( voter[i]->getDorm() ) !=0){
				continue;
			}
			if (PARTY == 1 && partyChoice.compare( voter[i]->getParty() ) !=0){
				continue;
			}
			total_votes++;
		}
	}
	cout << total_votes << endl;
}
