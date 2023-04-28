#include<iostream>
using namespace std;

int main(){
	int a = 10,b = 0;
	try {
		if(b == 0) throw "Invalid Input!!";
		cout << a/b << "\n";
	}catch(char const* e){
		cout << "In catch Block\n";
		cout << e << "\n"; 
	} 

	return 0;
}
