#include <iostream>
using namespace std;

main(){

	const int a = 10;
	int b = 10;

	//const int& c = b; c = 20;
	const int& c = b; b = 20; cout << c;

	return 0;

}
