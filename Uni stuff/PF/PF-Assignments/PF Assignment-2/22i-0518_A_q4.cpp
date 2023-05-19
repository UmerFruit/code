/* Name = Umer farooq
   student ID= 22I-0518
   	Assignment #2	
*/
#include<iostream>
using namespace std;
int main(){
	float fatg,cal,calfat,fatper;   //fat grams , calories , calories from fat , percentage of fat
	
	cout<<"Number of calories in the food : "<<endl;
	cin>>cal;
	cout<<"Number of fat grams in the food : "<<endl;
	cin>>fatg;
	
	calfat = fatg*9;
	fatper = (calfat/cal) * 100;
	
	cout<<fatper<<"% of the calories are from fat"<<endl;
	if(fatper <= 30){
		cout<<"This food is low in fat"<<endl;
	}


}
