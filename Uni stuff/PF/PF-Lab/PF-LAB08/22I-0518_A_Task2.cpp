#include<iostream>
using namespace std;
int main(){
	int num,lim,i=1;
	cout<<"Enter number for table : "<<endl;
	cin>>num;
	cout<<"Enter Limit : "<<endl;
	cin>>lim;
	if(num>0 && lim>0){
	while(i<=lim){
		cout<<num<<"*"<<i<<" = "<< num*i<<endl;
		i++;
	
	}
	}
	else{cout<<"ERROR! Enter positive values"<<endl; }

}
