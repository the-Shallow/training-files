#include<iostream>
using namespace std;

class Complex {
	int x;
	int y;

	public:Complex(int x , int y){
		this->x = x;
		this->y = y;
	}

	public:Complex add(Complex curr){
		int curr_x = this->x;
		int curr_y = this->y;
		Complex temp( curr_x+curr.getX(),curr_y+curr.getY());
		return temp;
	}

	public:int getX(){
		return this->x;
	}

	public:int getY(){
		return this->y;
	}

	public:void display(){
		cout << x << "+i" << y << "\n";
	}
};

int main(){

	Complex complex(5,4);

	complex.display();

	Complex complex2(4,6);

	Complex curr = complex.add(complex2);

	curr.display();

	return 0;
}
