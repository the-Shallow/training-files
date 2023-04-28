#include<iostream>
using namespace std;

template<class T1 , class T2>
class A {
	T1 a;
	T2 b;

	public:A(T1 a , T2 b){
		this->a = a;
		this->b = b;
	}

	public:void display(){
		cout << "a == " << this->a << " b == " << this->b << "\n";
	}
};

int main(){
	A<int,char> obj(5,'A');

	obj.display();

	return 0;
}
