#include<iostream>
using namespace std;

void f1(int a);
void f2(int& a);
void f3(int* p);
void f4(int* p);
void f5(int* & p);

main(){

	int a = 10;
	int* p = &a;
	int a1,a2,a3,a4,a5;
	
	f1(a); a1 = a;
	f2(a); a2 = a;
	f3(p); a3 = *p;
	f4(p); a4 = *p;
	f5(p); a5 = *p;

	cout << a1 << a2 << a3 << a4 << a5 << endl;
	
	return 0;
}

void f1(int a)
	{ a = 20; }
void f2(int& a)
	{ a = 30; }
void f3(int* p)
	{ *p = 40; }
void f4(int* p)
	{ p = new int(50); }
void f5(int* & p)
	{p = new int(60); }

