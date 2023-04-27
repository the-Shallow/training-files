#include<iostream>
using namespace std;

class A {
	public:int a;

	public:A(int a){
		this->a = a;
	}

	public:void display(){
		cout << "A.a = " << this->a << "\n";
	}
};

class B {
	public:int a;

	public:B(int a){
		this->a = a;
	}

	public:void display(){
		cout << "B.a = " << this->a << "\n";
	}
};

class C : A , B{
	public:C(int a ,int b):A(a),B(b){}

	public:void display(){
		A::display();
		B::display();
		cout << "C-- A.a == " << A::a << " --B.a == " << B::a << "\n";
	}
};

int main(){
	C obj(10,20);

	obj.display();

	return 0;
}
