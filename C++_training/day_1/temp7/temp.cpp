#include<iostream>
using namespace std;

int add(int a ,int b){
	return a + b;
}

int add(int a ,int b , int c){
	return a+ b + c;
}

int add(int a ,int b,int c , int d){
	return a + b + c + d;
}

int main(){

	cout << add(10,20) << "\n";
	cout << add(10,20,30) << "\n";
	cout << add(10,20,30,40) << "\n";
	return 0;
}
