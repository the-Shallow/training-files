#include<iostream>
using namespace std;

class Matrix {
	public:int a[2][2];

	public:void setData(){
		for(int i = 0;i<2;i++){
			for(int j = 0;j<2;j++){
				cout << "Enter the data for " << i << " " << j;
				cin >> a[i][j];
			}
		}	
	}


	public:Matrix operator+(Matrix b){
		Matrix curr;

		for(int i = 0;i<2;i++){
			for(int j = 0;j<2;j++){
				 curr.a[i][j] = this->a[i][j] + b.a[i][j];
			}
		}

		return curr;
	}

	public:void display(){
		for(int i = 0;i<2;i++){
			for(int j = 0;j<2;j++){
				cout << a[i][j] << " ";
			}

			cout << "\n";
		}	
	}
};

int main(){
	Matrix a,b;

	a.setData();
	b.setData();

	Matrix c = a + b;

	c.display();

	return 0;
}
