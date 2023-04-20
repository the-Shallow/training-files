#include<iostream>
using namespace std;

int add(int a , int b){
	return a+b;
}

int main(){

	int a,b;

	cout << "Enter the value for a: ";
	cin >> a;

	cout << "Enter the value for b: ";
	cin >> b;

	cout << "The Addition of a and b is " << add(a,b) << "\n";

	return 0; 
}
