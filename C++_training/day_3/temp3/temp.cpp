#include<iostream>
using namespace std;

class A {

	static int count;
	public:A(){
		this->count++;
	}

	public:~A(){
		this->count--;
	}

	public:void display(){
		cout << this->count << "\n";
	}
};

int A::count;

int main(){

	A a1,a2;

	a2.display();
	{
		A b1,b2;

		b2.display();
	}

	a2.display();
}
