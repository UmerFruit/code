#include<iostream>
using namespace std;
int main(){
	int x,i;
	cout<<"Enter X"<<endl;
	cin>>x;
	
	while(x%2==0)
	{
		
		cout<<"Enter valid value of X(Odd and Positive)"<<endl;
		cin>>x;	
	}
	
	for(i=1;i<(x/2)+1;i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
		}
	cout<<endl;
					
	}
	for(;i>0;i--)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
		}
	cout<<endl;
	}
		
			
			
		
	
	
	
	
	


}
