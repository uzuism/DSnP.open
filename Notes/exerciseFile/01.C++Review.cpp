#include <iostream>
using namespace std;

void f(int a){
	int bb =a;
}

int main(){

	/*
	int a = 10;
	int b = 20;
	int *p = &a;
	int *q = p;

	cout << &a << "\n";
	cout << *p << "\n";
	cout << p  << "\n";
	cout << *q << "\n";
	cout << q  << "\n";
	cout 	   << "\n";


	*q = 30;
	cout << *q << "\n";
	cout << q  << "\n";
	cout 	   << "\n";

	p = &b;	
	cout << *p << "\n";
	cout << p  << "\n";
	cout 	   << "\n";
	
	b = 40;
	*/

	int a = 10;
	int b = 20;
	int& i = a;
	cout << i  << "\n";
	cout << &i << "\n";
	cout 	   << "\n";

	int j = i;
	cout << j  << "\n";
	cout 	   << "\n";
	
	j = 30;
	i = b;
	cout << &i << "\n";
	cout 	   << "\n";


	return 0;

}
	


