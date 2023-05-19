/* Name = Umer farooq
   student ID= 22I-0518
   	Assignment #2	
*/
#include<iostream>
using namespace std;
int main(){
 	int choice;
 	int num1,num2,num3,num4;
	cout<<"Would you like to enter 3 numbers or 4 numbers?"<<endl;
	cin>>choice;
	
	if(choice == 3){
	
		cout<<"Enter 3 numbers"<<endl;
		cin>>num1>>num2>>num3;
	
		(num1>num2 ? 
		(num1>num3 ? 
		cout<<num1<<" is largest"<<endl : 
		cout<<num3<<" is largest"<<endl) :
		(num2>num3 ? 
		cout<<num2<<" is largest"<<endl :
	 	cout<<num3<<" is largest"<<endl));
	
	}
	
	else if(choice == 4){
		cout<<"Enter 4 numbers"<<endl;
		cin>>num1>>num2>>num3>>num4;
		
		(num1>num2 ? 
		(num1>num3 ? 
		(num1>num4 ? 
		cout<<num1<<" is largest"<<endl : 
		cout<<num4<<" is largest"<<endl) :
		(num3>num4 ? 
		cout<<num3<<" is largest"<<endl : 
		cout<<num4<<" is largest"<<endl)) :
		(num2>num3 ?
		(num2>num4 ? 
		cout<<num2<<" is largest"<<endl : 
		cout<<num4<<" is largest"<<endl) :
		(num3>num4 ? 
		cout<<num3<<" is largest"<<endl : 
		cout<<num4<<" is largest"<<endl)));
		
		
		
	}
	
	else{

		cout<<"Enter valid input (3 or 4)"<<endl;

	}
	
}
