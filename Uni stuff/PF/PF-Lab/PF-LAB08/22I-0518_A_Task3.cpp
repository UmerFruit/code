#include<iostream>
using namespace std;
int main(){
	
	int num1=0,num2=1,temp=0,sum=0,i=1,lim;
	cout<<"Enter number (Limit) : "<<endl;
	cin>>lim;lim=lim-1;
	if(lim>2){
	cout<<sum<<" ";
	while(i<lim){
		
		sum =num1 + num2;
		cout<<sum<<" ";	
		if(sum==1){cout<<sum<<" ";}
		temp=sum;
		
		num1=num2;
		num2=temp;
		i++;
		
	}
	}
	else{
	cout<<"Limit must be greater than 2"<<endl;}
	

}
