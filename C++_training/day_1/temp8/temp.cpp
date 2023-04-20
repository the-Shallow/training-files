#include<iostream>
using namespace std;

class A {

	public:void f1(){
		cout << "This is f1\n";
	}

	public:void f2(); 
};

void A::f2(){
	cout << "This is f2\n";
}

int main(){
	A a1;
	a1.f1();
	a1.f2();

	return 0;
}
