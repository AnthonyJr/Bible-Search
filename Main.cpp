#include <iostream>
#include <string>
#include <fstream>
using namespace std; 

int main() {
	
	string line;
	string searchItem; 
	cout << " What word would you like to search for?" << endl;
	
	int num;
	


	fstream myfile("TheHolyBible.txt");
	if (myfile.is_open()){
		while(getline(myfile,line)){
			size_t found = line.find(searchItem);
			if (found!= string::npos){
				num++;
				}
			}
		} 
		cout << "We found the word " << searchItem <<  " " << num << " times " << endl;
	}
