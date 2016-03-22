#include <iostream>
#include <vector>
#include <fstream>
#include <cstring>
using namespace std;
template <typename T> 
class Vote {
	public:
		Vote();
		void print();
	private:
		vector < vector<T> > votes;
};

template <typename T> 
Vote<T>::Vote(){
	string input; //stores the input file
	vector<T> tmp(9); //creates a vector with 9 spaces that will become the rows of the board
	
	cout << "Please enter the name of the file you wish to use" << endl;
	cin >> input;
	string file = input; // sets the file to the correct one 
	
	ifstream myfile(file.c_str() ); //this will input the file 
	
	if (myfile.is_open()){ //open the file and check if it is open
		for (int i = 0; i<9; i++){ //increments through and adds the vectors 9
			votes.push_back(tmp);
			for (int j=0; j<7; j++) { // increments through j in order to input the file into the correct column and row 
				myfile >> votes[i][j];
			}
		}
	}
}

template <typename T> 
void Vote<T>::print(){
		for (int i=0; i < 9; i++){
		for (int j=0; j<9; j++){
			cout << votes[i][j] << " "; //display each value with a space in between 
		}
	cout << endl;
	}
}


