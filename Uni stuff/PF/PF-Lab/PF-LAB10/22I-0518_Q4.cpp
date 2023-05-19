#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int num=5;
	cout<<setw(num-(num/2))<<"*"<<endl;
	for(int i=1;i<=num/2;i++)
	{
		for(int k=1;k>=i+3;k++)
		{
			cout<<" ";
		}
		cout<<"*";
		cout<<setw(i+2);
		cout<<"*";
		cout<<endl;
		
	}
	
}
