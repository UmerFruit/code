/*  Name : Umer Farooq
    Reg-ID : 22I-0518
    Assignment# 1
    			*/
   
#include<iostream>
using namespace std;
int main(){
	int odm,resm,spm;
	
	int odr,resr,spr,total;
	
	cout<<"On-demand machines owned : "<<endl;			//input number of machines that are owned
	cin>>odm;
	
	cout<<"Reserved machines owned : "<<endl;
	cin>>resm;								//for each type of machine 
	
	cout<<"Spot machines owned : "<<endl;
	cin>>spm;
	
	odr=3*30*24*odm;
	
	resr=2*30*24*resm;
	
	spr=0.5*30*24*spm;					//to calculate monthly bill multiply by hours used and by hourly rate
	
	cout<<"Cost of on-demand machines : "<<odr<<endl;     
	
	cout<<"Cost of reserved machines : "<<resr<<endl;
	
	cout<<"Cost of spot machines : "<<spr<<endl;
	
	total = odr+resr+spr;					//total price (monthly basis) 
	
	cout<<"Total monthly Costs : "<<total<<endl;
	
	}
