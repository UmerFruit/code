#include<iostream>
#include<string>
using namespace std;
int main()
{
	int snum,testnum,testscore,i=1,j,sum,avg;
	string name;
	cout<<"Enter number of students"<<endl;
	cin>>snum;
	cout<<"Enter number of test scores"<<endl;
	cin>>testnum;
	
	do
	{ 	
		j=1;sum=0,avg=0;
		cout<<"Enter name of student :"<<endl;
		cin>>name;
		do
		{
			cout<<"Enter Test score: "<<endl;
			cin>>testscore;
			sum=sum+testscore;
			j++;
		}while(j<=testnum);
		avg=sum/testnum;
		cout<<"The average score of "<<name<<" is "<<avg<<endl;
		i++;
	}while(i<=snum);
	
}
