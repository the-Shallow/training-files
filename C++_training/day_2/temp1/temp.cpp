#include<iostream>
using namespace std;

class Car {
	public: string brand;
	public: string model;
	//string brand,string model
	public:void setData(){
		//this->brand = brand;
		//this->model = model;

		cin >> this->brand;
		cin >> this->model;
	}

	public:void toString(){
		cout << brand << " " << model << "\n";
	}
};

int main(){

	Car car1,car2;
	//car1.setData("Honda","X5");
	//car2.setData("Ford","Mustang");
	
	car1.setData();
	car2.setData();
	car1.toString();
	car2.toString();

	return 0;
}
