#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
	cout<<"enter any number 1-20"<<endl;
	cin>>n;
	if(n<=20 && n>=1){
	cout<<setw(n+2)<<"|"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=n-i;j>=0;j--)
		{	
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<"*";
		}
		cout<<"|";
		for(int l=1;l<=i;l++)
		{
		 	cout<<"*";
		}	
		cout<<endl;
	}
	}
	else
	{
	cout<<"enter valid input"<<endl;		
	}
}
