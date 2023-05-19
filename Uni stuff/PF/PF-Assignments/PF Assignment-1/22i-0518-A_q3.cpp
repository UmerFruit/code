/*  Name : Umer Farooq
    Reg-ID : 22I-0518
    Assignment# 1
    			*/
#include <iostream>
using namespace std;
int main()
{
	
	int num , dig1 , dig2 , dig3 , dig4 , dig5;	
	
	cout<<"Enter a 5 digit number : "<<endl;
	cin>>num;
	
	dig1 = num/10000;        //dividing by 10000 will give 1st digit as ofcourse it will be divible by one
	
	dig2 = (num%10000)/1000; 
	
	//mod from 10000 will give us the rest of 4 digits and after dividing by 1000 we get the digit in 1000's place
	
	dig3 = (num%1000)/100;  
	
	// mod from 1000 will give remaining 3 digits and dividing by 100 will be equal to the digit in 100's place
	
	dig4 = (num%100)/10;     //mod from 100 gives last 2 digits and divide by 10 to get digit in 10's place
	
	dig5= num%10;            //mod 10 will give us the last digit of the number entered
	
		dig1=dig1/2;

		dig2=dig2/2;         //to half the values of the entered numbers

		dig3=dig3/2;

		dig4=dig4/2;

		dig5=dig5/2;

		cout<<"Modified number : "<<dig5<<dig4<<dig3<<dig2<<dig1<<endl;
		}
