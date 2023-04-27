#include<iostream>
using namespace std;

class People {
	protected:string name;
	protected:int age;

	public:People(string name,int age){
		this->name = name;
		this->age = age;
	}

	public:void display(){
		cout << "Name of the Employee : " << this->name << "\n";
		cout << "Age of the Employee : " << this->age << "\n";
	}
};

class Employee:People {
	protected:int EId;
	protected:string department;
	protected:int salary;

	public:Employee(string name,int age,int Eid,string department,int salary):People(name,age){
		this->EId = Eid;
		this->department = department;
		this->salary = salary;
	}

	public:void display(){
		People::display();
		cout << "ID of the Employee : " << this->EId << "\n";
		cout << "Department of the Employee: " << this->department << "\n";
		cout << "Salary of the Employee: " << this->salary << "\n";
	}
};

class Manager:Employee {
	protected:int team_size;
	protected:string project;

	public:Manager(string name,int age,int Eid,string department,int salary,int team_size,string project):Employee(name,age,Eid,department,salary){
		this->team_size = team_size;
		this->project = project;
	} 

	public:void display(){
		Employee::display();
		cout << "Team size handled by the manager: " << this->team_size << "\n";
		cout << "Project handled by the manager: " << this->project << "\n";
	}
};

int main(){
	Manager obj("Khush Patel",21,101,"Embedded",400000,50,"Apollo");

	obj.display();

	return 0;
}
