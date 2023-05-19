/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #3	
*/
#include<iostream>
using namespace std;
int main()
{   int i=4,j,k;
    while(i>=0)     //loop runs 5 times
    {   
        j=i;    
        while(j>0)
        {
            cout<<" ";  //num of spaces starts from 4 and decreases by 1 each row
            j--;        //first the spaces are printed
        }
        k=5-i;
        while(k>0)
        {
            cout<<5-i;  //the number of numbers increases by 1 while value remains same
            k--;
        }
        cout<<endl;
        i--;
    }
}