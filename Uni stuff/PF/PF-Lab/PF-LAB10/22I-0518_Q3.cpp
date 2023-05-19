#include <iostream>
using namespace std;
int main(){
	
	int num;
	cout<<"Enter Any number from 1 to 26"<<endl;
	cin>>num;
	if(num>=1 && num<=26){
	for(int i=65;i<num+65;i++)
	{
		for(int j=65;j<=i;j++)
		{
			cout<<static_cast<char>(i);
		}
		cout<<endl;
	}
	}
	else{
	cout<<"Enter valid input"<<endl;
	}
}
