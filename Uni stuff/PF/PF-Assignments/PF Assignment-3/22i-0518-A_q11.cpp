/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #3	
*/
#include<iostream>
using namespace std;
int main()
{   
    for(int l=1;l<=3;l++)
    {
                                                   
        for(int i=0;i<4;i++)                 //upper half
        {
            for(int space=(2*i)+2;space>0;space--)
            {   
                cout<<" ";                      //num of spaces starts from 2 and increases by 2
            }
            
         
            cout<<"*";
           for(int space=11-(4*i);space>0;space--)
           { 
           		cout<<" ";                       //num of spaces in middle start from 11 and dec by 4
           }
           if(i!=3) 
           	cout<<"*";              //prevents extra * at the intersection
         
                        
            for(int space=(2*i)+2;space>0;space--)
            {
                cout<<" ";                      //spaces start from 2 and inc by 2
            }
            cout<<endl;
        }
                                                 //lower half

        for(int i=0;i<4;i++)                
        {
            for(int space=6-2*i;space>0;space--)
            {
               cout<<" ";                   //same structure just reversed for the lower half
            }
            cout<<"*";
            for(int space=3+(4*i);space>0;space--)
            { 
                cout<<" ";
            }
            cout<<"*";
            cout<<endl;
        }
    }
}
