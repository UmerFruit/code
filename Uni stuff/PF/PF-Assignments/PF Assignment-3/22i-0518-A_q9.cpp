/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #3	
*/
#include<iostream>
using namespace std;
int main()
{   
    cout<<"+------+"<<endl;         //print the top line
    for(int j=1;j<=2;j++)
    { 
        for(int i=0;i<3;i++)                       //runs 3 times
        {
       
            cout<<"|";                  //make the outer borders
            for(int space=2-i;space>0;space--)
            {
                cout<<" ";                      //space starts at 3 and decreases by 1 upto 0 then repeats
            }
            cout<<"^";
            for(int space=i*2;space>0;space--)
            {
                cout<<" ";           //space in middle starts from 0 then increases by 2 upto 4 then repeats
            }
            cout<<"^";
            for(int space=2-i;space>0;space--)
            {
                cout<<" ";              //space starts at 3 and decreases by 1 upto 0 then repeats
            }
            cout<<"|";
            cout<<endl;
        }
        
    }
    cout<<"+------+"<<endl;         //middle divider of the figure
    for(int j=1;j<=2;j++)
    { 
        for(int i=0;i<3;i++)
        {
       
            cout<<"|";                  //same process as before but in reverse with v's
            for(int space=i;space>0;space--)
            {                                   //spaces in beginning start from 0 and inc by 1 and repeat
                cout<<" ";                  
            }
            cout<<"v";
            for(int space=4-(2*i);space>0;space--)
            {
                cout<<" ";                      //spaces in middle start from 4 dec by 2 and repeat
            }
            cout<<"v";
            for(int space=i;space>0;space--)
            {
                cout<<" ";                      //same loop as before
            }
            cout<<"|";
            cout<<endl;
        }
        
    }
    cout<<"+------+"<<endl;             //final line of the figure
}