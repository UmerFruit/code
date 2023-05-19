/* Name = Umer farooq
   student ID= 22I-0518
   	Assignment #2	
*/
#include <iostream>
using namespace std;
int main(){
	int month,day;
	cout<<"Enter month (1 - 12)\n";
	cin>>month;
	cout<<"Enter day (1 - 31)\n";
	cin>>day;
	
	if(month == 12 || month>=1 && month <=3)
	{
		if(month == 12)                        //in extreme months check if the days are only above or below the range
		{										//otherwise all days of in between months
			if(day>=16 && day <= 31)
			{
				cout<< "Winter" <<endl;
			}	
		}
		else if(month == 3)
		{
			if(day<=15 && day>=1)
			{
			cout<<"Winter"<<endl;
			
			}
		}
		else
		{
		cout<<"Winter"<<endl;	
		}
	}
	
	if(month >= 3 && month <= 6)
	{
		if(month == 3)
		{
			if(day>=16 && day <= 31)
			{
				cout<< "Spring" <<endl;
			}	
		}
		else if(month == 6)
		{
			if(day<=15 && day>=1)
			{
			cout<<"Spring"<<endl;
			
			}
		}
		else
		{
		cout<<"Spring"<<endl;
		}
	}
	
	if(month >= 6 && month <= 9)
	{
		if(month == 6)
		{
			if(day>=16 && day <= 30)
			{
				cout<< "Summer" <<endl;
			}	
		}
		else if(month == 9)
		{
			if(day<=15 && day>=1)
			{
			cout<<"Summer"<<endl;
			
			}
		}
		else
		{
		cout<<"Summer"<<endl;
		}
	}
	
	if(month >= 9 && month <= 12)
	{
		if(month == 9)
		{
			if(day>=16 && day <= 30)
			{
				cout<< "Fall" <<endl;
			}	
		}
		else if(month == 12)
		{
			if(day<=15 && day>=1)
			{
			cout<<"Fall"<<endl;
			
			}
		}
		else
		{
		cout<<"Fall"<<endl;
		}
	}

}
