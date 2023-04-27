#include<iostream>
using namespace std;

class Person {
	public:string name;
	public:int totalBill;

	public:Person(string name){
		this->name = name;
		this->totalBill = 0;
	}

	public:void updateBill(int bill){
		this->totalBill += bill;
	}

	public:void displayBill(){
		cout << "Name of the person: " << this->name << "\n";
		cout << "Total Bill of the Person: " << this->totalBill << "\n";
	}
};

class Book {
	public:int BId,price,stock;
	public:string title;

	public:Book(){}
	public:Book(int BId,string title,int price,int stock){
		this->BId = BId;
		this->title = title;
		this->price = price;
		this->stock = stock;
	}

	public:void updateStock(int newStock){
		this->stock += newStock;
	}

	public:int getPrice(){
		return this->price;
	}

	public:void display(){
		cout << "Name of the book is:" << this->title << "\n";
		cout << "Id of the book is:" << this->BId << "\n";

		cout << "Price of the book is:" << this->price << "\n";
		cout << "Stock of the book is:" << this->stock << "\n";
	}
};


Book exist(Book* books,int id,int requiredStock){
		for(int i = 0;i<2;i++){
			if(books[i].BId == id && books[i].stock >= requiredStock) return books[i];
		}

		Book obj(-1,"",100,2);
		return obj;
}


int main(){
	Book books[2];

	for(int i = 0;i<2;i++){
		int id,price,stock;
		string title;
		cout << "Enter the id of the book:";
		cin >> id;
		cout << "Enter the title of the book:";
		cin >> title;
		cout << "Enter the price of the book:";
		cin >> price;

		cout << "Enter the stock of the book:";
		cin >> stock;
		Book curr(id,title,price,stock);
		books[i] = curr;
		books[i].display();
	}


	Person person("Khush");

	int bookId,requstock;

	cout << "Enter the Id of the book:";
	cin >> bookId;

	cout << "Enter the stock required:";
	cin >> requstock;
	Book curr = exist(books,bookId,requstock);

	if( curr.BId == -1) cout << "Stocks are not enough\n";
	else {
		curr.updateStock(-requstock);
		curr.display();

		person.updateBill(curr.getPrice()*requstock);
		person.displayBill();
		
	}
	return 0;
}
