#include<iostream>
using namespace std;

class Time {
	int hr;
	int min;
	int sec;

	public:Time(int hr,int min,int sec){
		this->hr = hr;
		this->min = min;
		this->sec = sec;
	}

	public:Time add(Time time){
		int totalSecond = this->sec + time.getSec();

		int currMinutes = totalSecond / 60;
		int currSecond = totalSecond % 60;

		this->min = this->min + currMinutes;
		int totalMinutes = this->min + time.getMin();

		int currHour = totalMinutes / 60;
		currMinutes = totalMinutes % 60;

		currHour = currHour + this->hr + time.getHr(); 

		Time curr(currHour,currMinutes,currSecond);

		return curr;
	}


	public:int getHr(){
		return this->hr;
	}

	public:int getMin(){
		return this->min;
	}

	public:int getSec(){
		return this->sec;
	}

	public:void display(){
		cout << (this->hr < 10 ? "0" :"") << this->hr << "::" << (this->min < 10 ? "0" :"") << this->min << "::" << (this->sec < 10 ? "0" :"") << this->sec << "\n";
	}
};

int main(){

	Time time1(2,60,45);

	time1.display();

	Time time2(3,30,50);
	
	time2.display();

	Time time3 = time1.add(time2);
	
	time3.display();
}
