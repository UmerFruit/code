#include<iostream>
using namespace std;
int main()
{
	int term;
	float val,sum=0;
	cout<<"Enter number of terms "<<endl;
	cin>>term;
	
	for(int i=1;i<=term;i++)
	{	
		val=(1.0/(i*i));
		sum=sum+val;
		cout<<"1/"<<i<<"^"<<i<<" = "<<val<<endl;
		
	}
	cout<<"Sum of series : "<<sum;


}
