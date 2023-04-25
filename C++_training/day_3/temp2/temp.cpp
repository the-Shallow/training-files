#include<iostream>
using namespace std;

class A{

	public:int a;

	public:A(){}

	public:A(A &a){
		this->a = a.a;
	}
};

int main(){

	A x;

	x.a = 5;

	A b(x);

	cout << b.a;
}
