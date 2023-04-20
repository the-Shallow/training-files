#include<iostream>
using namespace std;

int main(){

	int a = 100;
	int &x = a;

	a++;

	cout << "a = " << a << "\n";
	x++;
	cout << "a = " << a << "\n";
	return 0;
}
