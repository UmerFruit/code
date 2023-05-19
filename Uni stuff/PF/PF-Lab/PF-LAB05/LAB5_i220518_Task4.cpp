#include<iostream>
using namespace std;
int main(){
float wage; int hours;
bool check;
cout<<"Enter number of hours worked : "<<endl;
cin>>hours;
check= (hours>40);
wage = hours*1000 + (hours%40)*1500*check;
cout<<"Wage : "<<wage<<endl;

}
