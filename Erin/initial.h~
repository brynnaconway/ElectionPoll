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
		int getSize();
	private:
		vector <T> votes;
};

template <typename T> 
Vote<T>::Vote(){
	string file = "results.dat"; // sets the file to the correct one 
	
	ifstream myfile(file.c_str() ); //this will input the file 
	
	if (myfile.is_open()){ //open the file and check if it is open
		while (!myfile.eof()){
			string substr;
			getline(myfile, substr, ',');
			votes.push_back(substr);
		}
	}
}

template <typename T>
int Vote<T>::getSize(){
	return (votes.size());
}
template <typename T> 
void Vote<T>::print(){
	for (int i = 0; i< getSize(); i++){
			cout << votes[i] << " "; //display each value with a space in between 
		}

}



