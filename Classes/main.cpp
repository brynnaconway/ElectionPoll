#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Voter.h"
#include "Candidate.h" 

int main() { 
	vector <Voter *> voters;
	string file = "results.dat"; // sets the file to the correct one 
	string candidate, age, gender, dorm, party, garbage; 
	ifstream myfile(file.c_str() ); //this will input the file 
	Voter *voter;
	int i = 0; 
	if (myfile.is_open()){ //open the file and check if it is open
		while (!myfile.eof()){ 
			getline(myfile, candidate, ',');
			getline(myfile, age, ',');
			getline(myfile, gender, ',');
			getline(myfile, dorm, ',');
			getline(myfile, party, ','); 
			getline(myfile, garbage, '\n'); 
			voter = new Voter; 
			voters.push_back(voter);
			voters[i]->setCandidate(candidate); 
			voters[i]->setAge(age); 
			voters[i]->setGender(gender); 
			voters[i]->setDorm(dorm); 
			voters[i]->setParty(party); 
			i++;
		}
	}
	for (int j = 0; j < voters.size() -1; j ++){
	
		voters[j]->print();
		cout << endl;
	}
	
	Candidate trump("Donald Trump", voters);
	Candidate clinton("Hillary Clinton", voters); 
	Candidate kasich("John Kasich", voters); 
	Candidate cruz("Ted Cruz", voters); 
	Candidate sanders("Bernie Sanders", voters); 
	
return 0;
}

