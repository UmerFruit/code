/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #3	
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=7;i++)
    {
        for(int j=6-i;j>=0;j--)
        {
            cout<<"*";          //starting from 6, * are decreased by 1 in each row
        }

        for(int space=i;space>0;space--)
        {
            cout<<" ";            //spaces from 1 - 5 are printed to gap from next
        }                           //structure

        for(int k=7-i;k>0;k--)
        {
            cout<<"//";             //then starting from 12 the num of / dec by 2
        }

        for (int l=2*(i-1); l>0; l--)
        {
            cout<<"\\";        //then starting from 0 the num of \ inc by 2
        }
        
        for(int space=i;space>0;space--)
        {
            cout<<" ";
        }

        for(int j=6-i;j>=0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
}