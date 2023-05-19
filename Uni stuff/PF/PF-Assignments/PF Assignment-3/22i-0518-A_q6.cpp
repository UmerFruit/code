/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #3	
*/
#include<iostream>
using namespace std;
int main(){

    for(int line=1;line<=40;line++) //first a line full of dashes is printed
    {
        cout<<"-";
    }
    cout<<endl;
    for(int i=1;i<40;i=i+4)
    {                               //then 10 times these 4 characters are printed
        cout<<"_-^-";
    }
    cout<<endl;
    int n=1;
    for(int k=1;k<=20;k++)   // pairs of numbers starting from 1-9 then 0-9 are printed
    {
       cout<<n<<n;
        n++;
       if(n==10)
       {n=0;}
    }
    cout<<endl;
     for(int line=1;line<=40;line++)   //at the end another line of dashes is printed
    {
        cout<<"-";
    }
    cout<<endl;

}