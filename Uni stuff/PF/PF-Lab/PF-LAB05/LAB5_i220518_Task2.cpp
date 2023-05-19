#include<iostream>
using namespace std;
int main(){
	int sub1=78,sub2=45,sub3=62,total;
	float percentage;
	total=sub1+sub2+sub3;
	percentage = static_cast<float> (total)/300;
	percentage = percentage*100;
	cout<<"Total Obtained Marks : "<<total<<endl;
	cout<<"Percentage : "<<percentage<<endl;
	



}
