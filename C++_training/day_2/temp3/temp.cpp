#include<iostream>
using namespace std;

class Shopping {

	string name;
	int itemcode[30];
	int itemprice[30];
	int count =0;
	int totalPrice = 0;

	public:Shopping(string name){
		this->name = name;	
	}

	void add_item(int code,int price){
		itemcode[count] = code;
		itemprice[count] = price;
		count++;
		totalPrice += price;
	}

	void remove_item(int code){
		for(int i = 0;i<count;i++){
			if(itemcode[i] == code){
				totalPrice -= itemprice[i];
				itemcode[i] = -1;
				itemprice[i] = 0;
				break;
			}
		}
	}

	void display_bill(){
		cout << this->totalPrice << "\n";
	}

	void display_items(){
		cout << name << "\n";
		for(int i = 0;i<count;i++){
			cout << i << " " << itemcode[i] << " " << itemprice[i] << "\n";
		}
	}
};

int main(){

	int itemcode,itemprice,choice;
	string name;

	cout << "Enter the name:";
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

	return 0;
}
