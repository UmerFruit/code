#include<iostream>
using namespace std;
int main(){
	int num,even=0,odd=0;
	int i=1;
	while(i<=10){
		cout<<"Enter any number : "<<endl;
		cin>>num;
		if(num%2 == 0){
			even = even + 1;
		}
		else{
			odd = odd +1;
		}
	i++;
	}
	cout<<"Even entered : "<<even<<endl;
	cout<<"Odd entered : "<<odd<<endl;

}
