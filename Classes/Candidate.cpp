#include <iostream>
#include <string> 
#include <vector>
#include "Voter.h"
#include "Candidate.h" 


/* temporary constructor for compiling purposes; values for variables will actually be based on */
Candidate::Candidate(string n, vector<Voter *> voter) {
	name = n;
	total_votes = 0;
    total_votes2 = 0;
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

int Candidate::getTotal2(){
    return total_votes2;
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

void Candidate::countVotes(int bar, vector<Voter *> voter){
    int i, side;
    side = bar;
    if (side == 1)
        total_votes = 0;
    if (side == 2)
        total_votes2 = 0;
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
            if (side == 1)
                total_votes++;
            if (side == 2)
                total_votes2++;
		}
	}

}
