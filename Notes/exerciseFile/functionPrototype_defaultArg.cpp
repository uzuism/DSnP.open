#include <iostream>
using namespace std;

void f(int a = 0);

int main(){

	f(10);

	return 0;
}

void f(int a){

	int b = a; 

} 

/* this will become compile error.
void f(int a = 1);

int main(){

	f(10);

	return 0;
}

void f(int a = 0){

	int b = a; 

} 
*/
