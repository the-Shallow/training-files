#include<iostream>
using namespace std;

class Item1 {
	int code,price,qty;

	public:Item1(int code, int price, int qty){
		this->code = code;
		this->price = price;
		this->qty = qty;
	}

	public:int getCode(){
		return this->code;
	}

	public:int getPrice(){
		return this->price;
	}

	public:int getQty(){
		return this->qty;
	}
};

class Item2 {
	
	int code,totalPrice;	
	public:Item2(Item1 item){
		this->code = item.getCode();
		this->totalPrice = item.getQty() * item.getPrice();
	}

	public:void display(){	
		cout << this->code << " " << this->totalPrice << "\n";
	}
};

int main(){
	Item1 item1(101,200,5);

	Item2 item2 = item1;
	item2.display();

	return 0;
}
