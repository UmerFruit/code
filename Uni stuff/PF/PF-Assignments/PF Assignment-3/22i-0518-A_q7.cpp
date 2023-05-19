/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #3	
*/
#include<iostream>
using namespace std;
int main()
{   int i,j=0,k;
    while(j<=50)
    {   i=1;
        while(i<10)
        {
            cout<<" ";
            if(i==10)       //9 spaces are printed before and after each |
            {
                i=1;
                break;
            }
            i++;
        }
        cout<<"|";      // the | land on top of the 0 in the next line
        j=j+10;
    }
    cout<<endl;
    k=1;
    while(k<=60)
    {
        cout<<k%10;         //print the numbers 1-9 then 0-9 till requirement
        k++;
        
    }
    cout<<endl;
}