#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	char op;
	cout<<"Enter the operation to be performed(+,-,*,/,%)"<<endl;
	cin>>op;
	cout<<"Enter the two operands"<<endl;
	cin>>num1>>num2;

	switch(op){
	
	case '+': cout<<"Addition : "<<num1+num2<<endl;
	
	break;
	
	case '-': cout<<"Subtration : "<<num1-num2<<endl;
	
	break;
	
	case '*': cout<<"Multiplication : "<<num1*num2<<endl;
	
	break;
	
	case '/': if(num2 != 0){
			
			cout<<"Division : "<<static_cast<float>(num1)/num2<<endl;
			
			}
			
		else { 
			
			cout<<"ERROR ! Enter non zero value as denominator"<<endl; 
			
			}
	break;
	

	}	

}
