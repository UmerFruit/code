/*  Name : Umer Farooq
    Reg-ID : 22I-0518
    Assignment# 1
    			*/
#include<iostream>
using namespace std;
int main(){
	int x,k,h,b;                                            
	
	float a,y,z,g,c;
	
	cout<<"Enter 4 integer values"<<endl;
  	
  	cout<<"X =";
  	cin>>x;
  	
  	cout<<"\nK =";
  	cin>>k;                             
  	
  	cout<<"\nH =";
  	cin>>h;  
  	
  	cout<<"\nB =";
  	cin>>b;
  	
  	cout<<endl;
  
  	a = 12*x;     //evaluate 12 time the value enter by user stored in x
  	
  	y = x*x*x*x;       //evaluate x to 4th power
  	
  	z = 5*x + 14*y + 6*k;  //evaluating these expressions
  	
  	g = (h+12)/(4*k);
  	
  	c= ((a*a*a)) / ((b*b)*(k*k*k*k));
 	
 	cout<<"a = "<<a<<endl
        <<"y = "<< y <<endl
        <<"z = "<< z <<endl  //displaying results of the evaluated expressions whos value was stored in 
        <<"g = "<< g <<endl  //variables
 	<<"c = "<< c <<endl;
 			
  
}
