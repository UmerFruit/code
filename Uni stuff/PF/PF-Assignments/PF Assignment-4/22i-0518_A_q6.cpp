/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #4	
*/
#include<iostream>
using namespace std;
void buddy(int,int);
int main()
{
    int lines,cheers;
    cout<<"Enter number of lines and number of cheers"<<endl;
    cin>>lines>>cheers;                                         //input

    while(lines<0 || cheers<0)                          //input validation
    {
        cout<<"Enter non negative values : "<<endl;
        cin>>lines>>cheers;
    }
    buddy(lines,cheers);
}
void buddy(int l,int c)
{   
    
    for(int i=0*3;i<l*3;i=i+3)
    {   
        for(int space=0*3;space<i;space++)      //space increases by 3 starting from 0 in each row
        {
            cout<<" ";
        }
        for(int j=1;j<=c;j++)                   //print go as many times as cheers was entered
        {
            cout<<"Go ";                                
            if(j!=c)                  //keep printing buddy in between as long as its not the last iteration
            {                                                                           
                cout<<"Buddy ";
            }
        }
        cout<<endl;                     //then an endl at the end of each line
    }
}