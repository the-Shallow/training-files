#include<iostream>
using namespace std;

class Employee {
	public:virtual void display(){
		cout << "I am employee\n";
	}
};

class Developer:public Employee {
	public:void display(){
		cout << "I am a developer\n";
	}
};

class Tester:public Employee {
	public:void display(){
		cout << "I am a tester\n";
	}
};

int main(){
	Employee E[3];
	Employee employee;
	Developer d;
	Tester t;
	E[0] = employee;

	E[1] = d;

	E[2] = t;


	Employee* e;
//e->display();

	for(int i = 0;i<3;i++){
		e = &E[i];

		e->display();
	} 

	return 0;
}
