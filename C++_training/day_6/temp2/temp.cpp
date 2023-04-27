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
	protected:int b;

	public:B(int a,int b) : A(a){
		this->b = b;
	} 

	public:void display(){
		A::display();
		cout << "a = " << this->a << " b = " << this->b << "\n"; 
	}
};

class C:B{
	protected:int c;

	public:C(int a ,int b,int c):B(a,b){
		this->c = c;
	} 

	public:void display(){
		B::display();
		cout << "b = " << this->b << " c = " << this->c << "\n"; 
	}
};

int main(){
	C obj(1,2,3);

	obj.display();

	return 0;
}
