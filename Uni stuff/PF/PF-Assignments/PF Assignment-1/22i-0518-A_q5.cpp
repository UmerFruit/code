/*  Name : Umer Farooq
    Reg-ID : 22I-0518
    Assignment# 1
    			*/


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int num1,num2,num3,num4,num5,scale;
	cout<<"Input 5 integers (between 0 and 10)"<<endl;
	cout<<"N1 = ";
	cin>>num1;
	
	cout<<"N2 = ";
	cin>>num2;
	
  	cout<<"N3 = ";
	cin>>num3;
	
	cout<<"N4 = "; 		//input number of asterics to be printed
	cin>>num4;
	
	cout<<"N5 = ";
	cin>>num5;
	
	cout<<"Enter Scale : ";				//scale of multiplication as input
	cin>>scale;
	
	cout<<"\nBAR CHART OUTPUT"<<endl;
	
	cout<<setw(num1*scale)<<setfill('*')<<""<<endl; 	//number times the scale will set the total width and just fill that 
	
	cout<<setw(num2*scale)<<setfill('*')<<""<<endl;       //width with the character '*' to print the bar chart
	
	cout<<setw(num3*scale)<<setfill('*')<<""<<endl;
	
	cout<<setw(num4*scale)<<setfill('*')<<""<<endl;
	
	cout<<setw(num5*scale)<<setfill('*')<<""<<endl;
	




}	
