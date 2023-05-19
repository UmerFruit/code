/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #3	
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{   int j,i=0,up=0,down=2,updig,temp,terms=20;
    
    cout<<"Enter the number of terms for the series"<<endl;         //input num of terms
    cin>>terms;
   	if(terms>0)
   	{
    do
    {       
        up = up + pow(2,i); 
        cout<<up<<" " ;            //prints the top series upto n terms
        i++;
    }while(i<terms);
    
    cout<<endl;
    up=0,i=0,j=1;
    
    do                                  //in next line prints the number of - equal to the num of digits 
    {   up += pow(2,i);                  //in the number on its top at corresponding position
                                        
        int temp=up;                    //runs the top series in background again to check the num of digits
        for(updig=0;temp>0;updig++)    
        {
            temp=temp/10;               //checks num of digits
        }
        for(int i=1;i<=updig;i++)
        {
            cout<<"-";                      //prints - upto num of digits
        }
        cout<<",";                          // a , at end of every fraction
        i++;
        j++;
    }while(j<=terms);
    
    cout<<"\b "<<endl;                      //to remove the last ,

    int j2=1,inc=1;

    do
    {  
        cout<<down;
        cout<<" ";   
        down += pow(2,inc);             //prints the bottom series
        inc++;
        j2++;
    }while(j2<=terms);
    cout<<endl;
    }
    else
    {
    	cout<<"Enter valid number greater than 1"<<endl;
    	
    }
}
