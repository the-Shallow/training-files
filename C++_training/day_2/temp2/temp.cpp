#include<iostream>
using namespace std;

class Student {

	int rollno;
	string name;
	int* marks;
	float percentage;

	public:Student(int rollno,string name,int* marks){
		this->rollno = rollno;
		this->name = name;
		this->marks = marks;
		this->percentage = this->getPercentage();
	}

	public:float getPercentage(){
		float avg = 0;
		for(int i = 0;i<5;i++){
			avg += marks[i];
		}

		return avg/5;
	}

	public:void toString(){
		cout<< rollno << " " << name << " " << percentage << "\n";

		cout << "Marks Obtained are: \n";
	

		for(int i = 0;i<5;i++){
			cout << marks[i] << "\n";
		}

		
	}
	
};

int main(){

	int marks[5];

	for(int i = 0;i<5;i++){
		cout << "Marks Obtained in " << i << " are: ";
		cin >> marks[i];
	}

	Student student(101,"Khush Patel",marks);

	student.toString();

	return 0;
}
