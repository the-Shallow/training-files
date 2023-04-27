#include<iostream>
using namespace std;

class A {
	public:string str;

	public:A(string str){
		this->str = str;
	}

	public:int operator==(A obj){
		if( obj.str.compare(this->str) == 0 ) return 1;
	
		return 0;
	}

	public:int operator>=(A obj){
		if( this->str.compare(obj.str) == 1 ) return 1;

		return 0;
	}
};

int main(){
	A curr("khush"),temp("Khush");
	if(curr == temp) cout << "Strings are same\n";

	if(curr >= temp) cout << "String " << curr.str << " is greater than " << temp.str << "\n";

	return 0;
}
