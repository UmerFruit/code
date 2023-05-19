/*  Name : Umer Farooq
    Reg-ID : 22I-0518
    Assignment# 1
    			*/

#include<iostream>
using namespace std;
int main(){

	int n,sum=0;    
	cout<<"enter 1st value : "<<endl;		 //input value 
	cin>>n;						
	sum += n;                                      //adding value to sum will store its value
	
	cout<<"enter 2nd value : "<<endl;
	cin>>n;
	sum += n;					//repeated adding will store the sum of the numbers entered 
	                                              //using only one variable
	cout<<"enter 3rd value : "<<endl;
	cin>>n;
	sum += n;
	
	cout<<"enter 4th value : "<<endl;
	cin>>n;
	sum += n;
	
	cout<<"enter 5th value : "<<endl;
	cin>>n;
	sum += n;

	cout<<"The Sum is "
	<<sum
	<<"\nThe Average is "
	<<sum/5<<endl;                               //output the sum and average by dividing the num of terms

	}
