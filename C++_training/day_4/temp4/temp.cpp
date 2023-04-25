#include<iostream>
using namespace std;

class Complex {
	public:int x,y;

	public:Complex(){}


	public:Complex(int x , int y){
		this->x = x;
		this->y = y;
	}

	//public:void operator++(int z=0){
	//	this->x++;
	//	this->y++;
	//}

	public:int operator==(Complex temp){
		if( this->x != temp.x || this->y != temp.y ) return 0;

		return 1;
	}

	friend void operator++(Complex &A,int z);
	public:void display(){
		cout << this->x << " " << this->y << "\n";
	}
};

void operator++(Complex &A,int z = 0){
	A.x = A.x + 1;
	A.y = A.y + 1;
}

int main(){
	Complex a(10,10),b(10,0),c;

	if(a == b) cout << "Both are same\n";

	a.display();

	return 0;
}
