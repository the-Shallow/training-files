#include<iostream>
using namespace std;

class Complex {
	int x,y;

	public:Complex(){}


	public:Complex(int x , int y){
		this->x = x;
		this->y = y;
	}

	public:Complex operator-(Complex temp){
		return Complex(this->x-temp.x , this->y-temp.y);
	}

	public:void display(){
		cout << this->x << " " << this->y << "\n";
	}
};

int main(){
	Complex a(10,10),b(5,5),c;

	c = a - b;

	c.display();

	return 0;
}
