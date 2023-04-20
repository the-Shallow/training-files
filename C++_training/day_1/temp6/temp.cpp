#include<iostream>
using namespace std;

int cubevolume(int l=5,int w=6,int h=7){
	return l*w*h;
}

int main(){
	//cout << cubevolume();
	cout<<cubevolume(10,20);
	//cubevolume(10);
	return 0;
}
