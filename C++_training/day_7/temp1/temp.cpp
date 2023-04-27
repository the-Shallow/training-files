#include<iostream>
using namespace std;

class A {
	int a,b;

	public:A(int a ,int b){
		this->a = a;
		this->b = b;
	}

	public:void setA(int a){
		this->a = a;
	}

	public:void setB(int b){
		this->b = b;
	}

	public:int getA(int a){
		return this->a;
	}

	public:int getB(int b){
		return this->b;
	}

	public:void display(){
		cout << "a == " << this->a << " b== " << this->b << "\n";
	}
};

int main(){
	A temp(5,3);

	A* obj = &temp;
	obj->display();

	return 0;	
}
