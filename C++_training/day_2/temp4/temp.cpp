#include<iostream>
using namespace std;

class Shopping {

	string name;
	int itemcode[30];
	int itemprice[30];
	int count =0;
	int totalPrice = 0;


	public:Shopping(){	
	}

	public:Shopping(string name){
		this->name = name;	
	}

	public:void add_item(int code,int price){
		itemcode[count] = code;
		itemprice[count] = price;
		count++;
		totalPrice += price;
	}

	public:void remove_item(int code){
		for(int i = 0;i<count;i++){
			if(itemcode[i] == code){
				totalPrice -= itemprice[i];
				itemcode[i] = -1;
				itemprice[i] = 0;
				break;
			}
		}
	}

	public:void display_bill(){
		cout << this->totalPrice << "\n";
	}

	public:void display_items(){
		cout << name << "\n";
		for(int i = 0;i<count;i++){
			cout << i << " " << itemcode[i] << " " << itemprice[i] << "\n";
		}
	}
};

void display_customers(Shopping* customers,int length){
	for(int i = 0;i<length;i++){
		customers[i].display_items();
	}
}

int main(){

	int itemcode,itemprice,choice;
	string name;

	int customers;
	cout << "Enter the number of customers:";
	cin >> customers;
	Shopping shoppings[customers];

	for(int i = 0;i<customers;i++){
		cout << "Enter the name:";
		cin.ignore();
		getline(cin,name);
	
		Shopping shopping(name);
		while(true){
			cout<< "Press -1 to quit\n";
			cout << "Enter the choice:";
			cin >> choice;

			if(choice == -1) break;

			switch(choice){
				case 1:{	
					cout << "Enter the itemcode:";
					cin >> itemcode;
					cout << "Enter the price:";
					cin >> itemprice;
				
					shopping.add_item(itemcode,itemprice);
					break;			
				}
				case 2:{
					int itemcode;
					cout << "Enter the itemcode:";
					cin >> itemcode;
					shopping.remove_item(itemcode);
					break;
				}

				case 3:{
					shopping.display_bill();
					break;			
				}
				case 4:{
					shopping.display_items();
					break;
				}
			}
		}

		shoppings[i] = shopping;
	}

	display_customers(shoppings,customers);

	return 0;
}
