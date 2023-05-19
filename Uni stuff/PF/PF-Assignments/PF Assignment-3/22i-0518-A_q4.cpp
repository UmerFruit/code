/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #3	
*/
#include <iostream>
using namespace std;
int main()
{   int i=0,j;
    while(i < 6)   //loop runs 5 times
    {
        cout<<"#";                 //first #
        j=i;
        while(j> 0)
        {                   //num of spaces between # increases by 1 starting from 0
            cout<<" ";         //spaces in between
            j--;
        }
        cout<<"#";          //second #
        cout<<endl;
        i++;
    }


}