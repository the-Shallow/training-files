#include<iostream>
using namespace std;

class A {

	public:static int count;

	public:A(){
		this->count++;
	}

	public:static void display(){
		cout<< "Hello World!!\n";
	}

	public:int getCount(){
		return this->count;
	}
};

int A::count;

int main(){
	A a;
	A b;
	cout << a.getCount() << "\n";
	A::display();
	return 0;
}
