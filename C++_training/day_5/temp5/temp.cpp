#include<iostream>
using namespace std;

class Item {
	int code,price,qty;

	public:Item(int code, int price , int qty){
		this->code = code;
		this->price = price;
		this->qty = qty;
	}

	public:operator int(){
		return this->price * this->qty;
	}
};

int main(){
	int bill;

	Item item1(101,200,5);

	bill = item1;

	cout << bill << "\n";

	return 0;
}
