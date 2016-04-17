#include <iostream>
#include <string> 
#include <vector>
#include "Voter.h"
#include "Candidate.h" 

/* temporary constructor for compiling purposes; values for variables will actually be based on */
Candidate::Candidate(string n, vector<Voter *> voter) {
	name = n;
	total_votes = 0;
    ageChoice = "Age";
    dormChoice = "Dorm";
    genderChoice = "Gender";
    partyChoice = "Political Party";
}

Candidate::Candidate() {
    return;
}

int Candidate::getTotal(){
	return total_votes;
}

void Candidate::setAgeChoice(string ageString) {
    ageChoice = ageString;
}

void Candidate::setDormChoice(string dormString) {
    dormChoice = dormString;
}

void Candidate::setPartyChoice(string partyString) {
    partyChoice = partyString;
}

void Candidate::setGenderChoice(string genderString) {
    genderChoice = genderString;
}

void Candidate::countVotes(vector<Voter *> voter){
	total_votes = 0;
    int i;
    for (i=0; i < voter.size(); i++){
		if (name.compare( voter[i]->getCandidate() ) == 0){
            if (genderChoice.compare("Gender") != 0 && genderChoice.compare( voter[i]->getGender() ) != 0){
				continue;
			}
            if (ageChoice.compare("Age") != 0 && ageChoice.compare( voter[i]->getAge() ) !=0){

                continue;
			}
            if (dormChoice.compare("Dorm") != 0 && dormChoice.compare( voter[i]->getDorm() ) !=0){
				continue;
			}
            if (partyChoice.compare("Political Party") != 0 && partyChoice.compare( voter[i]->getParty() ) !=0){
				continue;
			}
			total_votes++;
		}
	}

}
