#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
		cout<<"Enter any number"<<endl;
		cin>>n;
		cout<<"+";
		cout<<setw(n-2)<<setfill('-')<<""<<"+"<<endl;
		for(int j=1;j<=n-2;j++)
		{
			cout<<"|"<<setw(n-2)<<setfill('-')<<""<<"|"<<endl;
		
		}
		cout<<"+";
		cout<<setw(n-2)<<setfill('-')<<""<<"+"<<endl;
	

}
