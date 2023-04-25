#include<iostream>
using namespace std;

class Time {
	int hour,minutes;

	public:Time(int n){
		this->hour = n / 60;
		this->minutes = n % 60;
	}

	public:void display(){
		cout << this->hour << " hours " << this->minutes << " minutes\n"; 
	}
};

int main(){
	int n = 78;

	Time t = n;

	t.display();

	return 0;
}

