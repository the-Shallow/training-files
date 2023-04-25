#include<iostream>
using namespace std;

class A;

class B {
	int y;

	public:B(int y){
		this->y = y;
	}

	friend int add(A a, B b);

};



class A {
	int x;

	public:A(int x){
		this->x = x;
	}

	friend int add(A a, B b);
};

int add(A a , B b){
	return a.x + b.y;
}

int main(){

	A a(5);
	B b(6);

	cout << add(a,b) << "\n";

	return 0;
}
