#include<iostream>
using namespace std;

class Student {
	protected:int rollno;
	protected:string name;

	public:Student(int rollno,string name){
		this->rollno = rollno;
		this->name=name;
	}
};

class Test {
	protected:int testMarks;

	public:Test(int testMarks){
		this->testMarks=testMarks;
	}
};

class Practical {
	protected:int practicalMarks;

	public:Practical(int practicalMarks){
		this->practicalMarks=practicalMarks;
	}
};

class Result : Student,Test,Practical {
	protected:int totalMarks;

	public:Result(int rollno,string name,int testMarks,int practicalMarks): Student(rollno,name),Test(testMarks),Practical(practicalMarks) {
		this->totalMarks = this->testMarks + this->practicalMarks;
	}

	public:void display(){
		cout << "Roll No. of the Student is -- " << this->rollno << "\n"; 
		cout << "Name of the Student is -- " << this->name << "\n";
		cout << "Total Marks scored by the student is " << this->totalMarks << "\n";
	}
};

int main(){
	Result obj(27,"Khush Patel",45,67);

	obj.display();

	return 0;
}
