#include<iostream>
using namespace std;

class A {
	public:string s;

	public:A(){}

	public:A(string s){
		this->s = s;
	}

	public:bool operator==(A temp){
		
		if( this->s.length() != temp.s.length() ) return 0;
		for( int i = 0;i<this->s.length();i++ ){
			if( this->s.at(i) != temp.s.at(i) ) return 0;
		}

		return 1;
	}

	public:bool operator>(A temp){
		for( int i = 0;i<this->s.length();i++ ){
			if( this->s.at(i) < temp.s.at(i) ) return 0;
		}

		return 1;
	}

	public:bool operator<(A temp){
		for( int i = 0;i<this->s.length();i++ ){
			if( this->s.at(i) > temp.s.at(i) ) return 0;
		}

		return 1;
	} 
};

int main(){

	A a("Khush"),b("khush");

	if(a == b) cout << "Strings are same\n";
	else if(a > b) cout << "String a is greater than string b\n";
	else if(a < b) cout << "String a is less then string b\n";
	

	return 0;
}
