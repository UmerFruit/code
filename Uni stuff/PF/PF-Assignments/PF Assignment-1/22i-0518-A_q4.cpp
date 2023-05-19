/*  Name : Umer Farooq
    Reg-ID : 22I-0518
    Assignment# 1
    			*/

#include <iostream>
using namespace std;
int main(){
	
	char l1,l2,l3,l4,l5,l6,l7,l8;
	
	cout<<"Enter 8 letter word : "<<endl;   
	
	cin.get(l1);                         
	cin.get(l2);
	cin.get(l3);
	cin.get(l4);				
	cin.get(l5);				//input one letter at a time and store in a character variable
	cin.get(l6);
	cin.get(l7);
	cin.get(l8);
		
	l1 -= 32;
	l2 -= 32;
	l3 -= 32;
	l4 -= 32;          //in ascii capital letters start 32 integer numbers before lower case
	l5 -= 32;          
	l6 -= 32;
	l7 -= 32;
	l8 -= 32;
			
	cout<<"Your entered word in capital : "<<l1<<l2<<l3<<l4<<l5<<l6<<l7<<l8<<endl;
		
}
