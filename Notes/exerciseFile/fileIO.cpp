#include <iostream>
#include <ios>
#include <fstream>
#include <cstdlib> // for exit()
using namespace std;

int main(){
	
	ifstream inFile("test.in");
	ofstream outFile("test.out");
	fstream ioFile;

	if (!inFile){
		cerr << "Cannot open input file" << endl;
		exit(1);
	}

	int i, j, k;

	inFile >> i >> j >> k;

	outFile.close();

	ioFile.open("test.io");

	if(!ioFile){
		cerr << "Cannot open io file" << endl;
		exit(1);
	}

	return 0; //Indicate successful program execution

}
