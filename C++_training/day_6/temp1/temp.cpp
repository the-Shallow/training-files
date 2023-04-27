#include<iostream>
using namespace std;

class A {
	protected:int a;

	public:A(int a){
		this->a = a;
	}

	public:void display(){
		cout << "a = " << this->a << "\n";
	}
};

class B:A {
	int b,p;

	public:B(int a,int b):A(a){
		this->b = b;
	}

	public:void display(){
		cout << "b = " << this->b << "\n";
	}

	public:void prod(){
		this->p = this->a * this->b;

		cout << "p = " << this->p << "\n";
	}
};

int main(){
	B obj(5,2);

	obj.display();
	obj.prod();

	return 0;
}
