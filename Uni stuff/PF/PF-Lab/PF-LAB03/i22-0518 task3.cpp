#include <iostream>
using namespace std;
int main(){
char ch1,ch2,temp;
cout<<"Please enter 1st character "<<endl;
cin>>ch1;
cout<<"Please enter 2nd character "<<endl;
cin>>ch2;
cout<<"The first character: "<<ch1<<"\nThe Second character: "<<ch2<<endl;
temp=ch1;
ch1=ch2;
ch2=temp;
cout<<"The first character: "<<ch1<<"\nThe Second character: "<<ch2<<endl;

}
