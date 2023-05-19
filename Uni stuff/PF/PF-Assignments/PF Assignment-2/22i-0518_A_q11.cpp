/* Name = Umer farooq
   student ID= 22I-0518
   	Assignment #2	
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
	string fname,lname;
	int belt,batch,unit,log,ID;
	cout<<"Enter Name of Army Man : "<<endl;
	cin>>fname>>lname;
	cout<<"Enter ID of Army Man : "<<endl;
	cin>>ID;

	belt = ID<<24;
	belt = ID>>24;
	
	batch = ID>>7;
	batch = batch & 1023;

	unit = ID>>22;	
	
	log = ID>>17;
	log = log & 31;
	
	cout<<"Belt number of "<<fname<<" "<<lname<<" is : "<<belt<<endl;
	cout<<"Batch number of "<<fname<<" "<<lname<<" is : "<<batch<<endl;
	cout<<"Log number of "<<fname<<" "<<lname<<" is : "<<log<<endl;
	cout<<"Unit number of "<<fname<<" "<<lname<<" is : "<<unit<<endl;
	
	
	
	
   
}
