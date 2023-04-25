#include<iostream>
using namespace std;

class Complex {
	int x,y;

	public:Complex(){}

	public:Complex(int x, int y){
		this->x = x;
		this->y = y;
	}

	friend Complex operator+(Complex A , Complex B);

	public:void display(){
		cout << this->x << " " << this->y << "\n"; 
	}
};

Complex operator+(Complex A , Complex B){
	return Complex(A.x+B.x,A.y+B.y);
}

int main(){
	Complex A(10,10),B(5,5),C;

	C = A + B;

	C.display();

	return 0;
}
