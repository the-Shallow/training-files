#include<iostream>
using namespace std;

class Student {
	protected:int rollno;
	protected:string name;

	public:Student(){
		cout << "Hello\n";
	};
	public:Student(int rollno,string name){
		cout << rollno << " " << name << "\n";
		this->rollno = rollno;
		this->name=name;
	}

	public:void display(){
		cout << "Roll No. of the Student is -- " << this->rollno << "\n"; 
		cout << "Name of the Student is -- " << this->name << "\n";
	}
};

class Test:public virtual Student {
	protected:int testMarks;

	public:Test(int testMarks):Student(){
		this->testMarks=testMarks;
	}
};

class Practical:public virtual Student {
	protected:int practicalMarks;

	public:Practical(int rollno,string name,int practicalMarks):Student(rollno,name){
		this->practicalMarks=practicalMarks;
	}
};

class Result :public Test,Practical {
	protected:int totalMarks;

	public:Result(int rollno,string name,int testMarks,int practicalMarks):Test(testMarks),Practical(rollno,name,practicalMarks) {
		this->totalMarks = this->testMarks + this->practicalMarks;
	}

	public:void display(){
		cout << "Total Marks scored by the student is " << this->totalMarks << "\n";
	}
};

int main(){
	Result obj(27,"Khush Patel",45,67);

	obj.Student::display();
	obj.display();

	return 0;
}
