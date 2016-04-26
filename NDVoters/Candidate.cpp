/* Candidate class that stores the total number of votes belonging to each candidate. A candidate object is instantiated for each different candidate */

#include <iostream>
#include <string> 
#include <vector>
#include "Voter.h"
#include "Candidate.h" 

Candidate::Candidate(string n, vector<Voter *> voter) {
	name = n;
	total_votes = 0; // stores votes for left bar
    total_votes2 = 0; // stores votes for right bar 
    ageChoice = "Age";
    dormChoice = "Dorm";
    genderChoice = "Gender";
    partyChoice = "Political Party";
}

Candidate::Candidate() {
    return;
}

int Candidate::getTotal(){ // returns candidate's total votes corresponding to choice for left bar
	return total_votes;
}

int Candidate::getTotal2(){ // returns candidate's total votes corresponding to choice for left bar
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
    side = bar; // variable to determine which bar votes are being calculated for 
    if (side == 1) // left bar
        total_votes = 0;
    if (side == 2) // right bar 
        total_votes2 = 0;
    for (i=0; i < voter.size(); i++){ // loops through every voter in the vector 
		if (name.compare( voter[i]->getCandidate() ) == 0){ // voter voted for the candidate corresponding to the object
            if (genderChoice.compare("Gender") != 0 && genderChoice.compare( voter[i]->getGender() ) != 0){
				continue; // if a gender dropdown is chosen and the gender choice doesn't match the gender of the voter, move on to the next voter 
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
