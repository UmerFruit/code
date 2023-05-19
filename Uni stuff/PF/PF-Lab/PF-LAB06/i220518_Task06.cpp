#include<iostream>
using namespace std;
int main(){

	int num1,num2,num3;
	
	cout<<"Enter 3 numbers : "<<endl;
	cin>>num1>>num2>>num3;
	
	if(num1>num2){
		if(num1>num3){
			cout<<num1<<" is the greatest."<<endl;
		}
	}
	
	if(num2>num1){
		if(num2>num3){
			cout<<num2<<" is the greatest."<<endl;
		}
	}
	
	if(num3>num1){
		if(num3>num2){
			cout<<num3<<" is the greatest."<<endl;
		}
	}

}
