#include<iostream>
using namespace std;
int main(){

	int num1,num2,num3;
	
	cout<<"Enter 3 numbers"<<endl;
	cin>>num1>>num2>>num3;
	
	cout<<"Input : "<<num1<<" "<<num2<<" "<<num3<<" "<<endl;
	
	if(num1<num3 && num1>num2){

		cout<<"Output : "<<num1<<endl;
	}
	
	if(num2<num3 && num2>num1){

		cout<<"Output : "<<num2<<endl;
	}
	
	if(num3<num1 && num3>num2){
		
	cout<<"Output : "<<num3<<endl;

	}
	

}
