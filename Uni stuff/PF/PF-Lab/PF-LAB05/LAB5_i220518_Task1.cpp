#include<iostream>
using namespace std;
int main(){
	int num,dig1,dig2,dig3,sum;
	cout<<"Enter 3 digit integer"<<endl;
	cin>>num;
	
		dig1 = (num%10);
		dig2 = (num%100)/10;
		dig3 = (num/100);
		
		sum=dig1+dig2+dig3;
		cout<<"The sum is "<<sum<<endl;

}
