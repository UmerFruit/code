/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #3	
*/
#include<iostream>
using namespace std;
int main()
{   int num;
    for(int i=1;i<10;i++)                           //upper left quarter
    {
        for(int space=18-(i*2);space>0;space--)
        {
            cout<<" ";                  //spaces start at 18 and dec by 2;
        }
        for(num=1;num<=i;num++)
        {
            cout<<num<<" ";               //prints the number then a space
        }
        num-=2;
        for(int j=i;j>1;j--)
        {
            cout<<num<<" ";          //the numbers are printed in reverse order for the upper right quarter
            num--;
        }
        cout<<endl;
        
    }
    for(int i=16;i>0;i-=2)
    {    num=1;
        for(int space=0;space<=16-i+1;space++)
        {
            cout<<" ";              //same logic as the upper half but reversed and for only 1 quarter
        }
        for(int k=1;k<i/2+1;k++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
}
}