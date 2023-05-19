/*  Name : Umer Farooq
    Reg-ID : 22I-0518
    Assignment# 1
    			*/

#include<iostream>
using namespace std;
int main()
{

	int numeggs;
	int egg30,egg24,egg18,egg12,egg6,eggrem;
	
	cout<<"Enter number of eggs to be packed"<<endl;
	cin>>numeggs;
	
	egg30=numeggs/30;     	   		//checks 30 numbered packings from entered eggs
	
	egg24=(numeggs%30)/24;       		//checks 24 numbered packings possible from the

	egg18=((numeggs%30)%24)/18;    	//remaining eggs

	egg12=(((numeggs%30)%24)%18)/12;

	egg6=((((numeggs%30)%24)%18)%12)/6;

	eggrem=((((numeggs%30)%24)%18)%12)%6; //total eggs remaining after all possible packings
		
	cout<<"Number of 30 sized packings : "<<egg30<<"\n";
	
	cout<<"Number of 24 sized packings : "<<egg24<<"\n";
	
	cout<<"Number of 18 sized packings : "<<egg18<<"\n";   //OUTPUT NUMBER OF EGGS I.E RESULT
	
	cout<<"Number of 12 sized packings : "<<egg12<<"\n";
	
	cout<<"Number of 6 sized packings : "<<egg6<<"\n";
	
	cout<<"Remaining Eggs : "<< eggrem <<endl;
	
}
