/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #3	
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<6;i++)        //loop should run 5 times
    {   
        int j=2*i,k=22-(4*i),l=2*i;     // starts with 0 and
        while(j>0)                     //with each row the num of \ increases by 2
        {                               
            cout<<"\\";             
            j--;
        }
        while(k>0)
        {        //counter starts with 22 and the num of ! decreases each row by 4
            cout<<"!";
            k--;
            
        }
        while(l>0)
        {
            cout<<"/";      // counter starts with 0 and increases with each row by 2 
            l--;
        }
        cout<<endl;
    }
}