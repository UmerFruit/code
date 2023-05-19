#include <iostream>
using namespace std;
int main(){

	int num;
	cout<<"Enter any number"<<endl;
	cin>>num;
	
	if(num==0){
		cout<<"The number is zero and even"<<endl;
	
	}
	else if(num != 0){
		
		cout<<"The number is non zero";
		
		
		if(num%2==0){
			cout<<" and even"<<endl;
		}
		else if (num%2 == 1){
			cout<<" and odd"<<endl;
		}
	}
	

}
