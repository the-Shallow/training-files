#include<iostream>
using namespace std;

class Person {
	int age;

	public:Person(int age){
		this->age = age;
	}

	public:Person max(Person curr){
		return this->age >= curr.age ? *this : curr;
	}

	public:void display(){
		cout << "age == " << this->age << "\n";
	}
};

int main(){
	Person A(15),B(10);

	Person temp = A.max(B);

	temp.display();

	return 0;
}
