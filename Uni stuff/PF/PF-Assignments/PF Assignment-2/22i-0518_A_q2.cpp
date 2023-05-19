/* Name = Umer farooq
   student ID= 22I-0518
   	Assignment #2	
*/
#include <iostream>
using namespace std;
int main(){
	int ch;
	const float PI=3.141592;
	float areac,areat,arear,rad,len,wid,base,height;   
	cout<<"GEOMETRY CALCULATOR"<<endl<<endl;
	cout<<"Calculate area of : "<<endl;
	cout<<"Circle : 1\nRectangle : 2\nTriangle : 3\nTo Quit : 4\nEnter number to proceed : ";
	cin>>ch;
	
	if(ch == 1){
		cout<<"Radius : "<<endl;
		cin>>rad;
		if(rad>0){
			areac = rad*rad*PI;
			cout<<"Area : "<<areac<<endl;
		}
		else{ 
			cout<<"ERROR! Please enter non negative value for radius"<<endl;}
		}
		
	else if(ch == 2){
		cout<<"Lenght : ";
		cin>>len;
		cout<<"\nWidth : ";
		cin>>wid;
		if(len>0 && wid>0){
			arear= len*wid;
			cout<<"\nArea : "<<arear<<endl;
		}
		else{
		cout<<"ERROR! Please enter non negative value for Lenght and width"<<endl;
		}
	}
	else if(ch == 3){
		cout<<"Base : ";
		cin>>base;
		cout<<"\nHeight : ";
		cin>>height;
		if(base>0 && height>0){
			areat= base*height*0.5;
			cout<<"\nArea : "<<areat<<endl;
		}
		else{
		cout<<"ERROR! Please enter non negative value for base and height"<<endl;
		}
	}
	else if(ch == 4){
		
	
	}
	else{
	
	cout<<"ERROR! Enter valid input (1-4)"<<endl;
	
	}
	}
