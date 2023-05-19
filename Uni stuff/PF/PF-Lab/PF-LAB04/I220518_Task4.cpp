#include<iostream>
using namespace std;
int main()

{
	int a,b,c,sumofcube;

	cout<<"Enter 3 numbers"<<endl;

	cin>>a>>b>>c;

	sumofcube= (a*a) + (b*b) + (c*c)+2*( a*b + b*c + c*a );

	cout<<"The result is "<<sumofcube<<endl;


}
