/* Name = Umer farooq
   student ID= 22I-0518
   	Assignment #2	
*/
#include <iostream>
using namespace std;
int main(){
	int hard,tstren;  //hardness,tensile strength
	float cc;   //carbon content
	bool c1,c2,c3; //conditions 1 ,2 ,3
	cout<<"Enter the following\nHardness : \n";
	cin>>hard;
	cout<<"Carbon Content : "<<endl;
	cin>>cc;
	cout<<"Tensile Strength : "<<endl;
	cin>>tstren;
	c1 = hard > 50;
	c2 = cc < 0.7;
	c3 = tstren > 5600;
	
	if(c1 && c2 && c3)
	{
		cout<<"Grade 10"<<endl;
	}
	
	else if(c1 && c2)
	{
		cout<<"Grade 9"<<endl;
	}
	else if(c2 && c3)
	{
		cout<<"Grade 8"<<endl;
	}
	else if(c1 && c3)
	{
		cout<<"Grade 7"<<endl;
	}
	else if(c1)
	{
		cout<<"Grade 6"<<endl;
	}
	else
	{
		cout<<"Grade 5"<<endl;
	}

}
