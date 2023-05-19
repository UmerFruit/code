/*  Name : Umer Farooq
    Reg-ID : 22I-0518
    Assignment# 1
    			*/
#include<iostream>
using namespace std;
int main(){

	float retail,IFEM=4.76,OMC=3.68,dealersC=7.00;                //given float values
	float petrollevy,salestax,totalp,p,t;			
	
	cout<<"Enter Mogas PSO Weighted Average cost of supply : "<<endl; //input retail or base price
	cin>>retail;
	
	cout<<" ";
	
	cout<<"\nPetroleum % : ";                          //enter petroleum percent
	cin>>p;
	
	petrollevy = retail*(p/100.0);                     //calculate petrollevy percentage of the basic price
	
	cout<<"Enter sales tax : "<<endl;		     //input sales tax value as value of percentage	
	cin>>t;
	
	salestax=retail*(t/100.0);				//calculate sales tax percentage of basic price
	
	totalp = retail + OMC + dealersC + IFEM + salestax + petrollevy;  
	//adding all values that need to be added to retail price to calculate
	
	cout<<"Max Ex-depot Sale Price = "<<totalp<<endl;     //total price
	
	

}
