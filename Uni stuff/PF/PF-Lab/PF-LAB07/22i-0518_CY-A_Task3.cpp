#include <iostream>
using namespace std;
int main(){

	int num,mod;
	cout<<"Enter any number"<<endl;
	cin>>num;
	mod= num%2;
	switch(num){

		case 0 : cout<<"The number is zero and even"<<endl;
		break;

		default : 
			switch(mod){
			case 0: cout<<"The number is non zero and even"<<endl;
			break;
			
			case 1: cout<<"The number is non zero and odd"<<endl;
			break;

		}

	}


}

