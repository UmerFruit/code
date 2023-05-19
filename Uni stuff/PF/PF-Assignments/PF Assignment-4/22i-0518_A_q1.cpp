/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #4	
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int pival();
int main()
{
    int terms;              //to print the num of terms to reach 3.14 val
    terms=pival();          
    if(terms == 0)         //in case we didn't reach 3.14 val
    {
        cout<<"We did not find the number of terms to get 3.14 value."<<endl;
    }
    else                    //output the number of terms to 3.14 val
    {
        cout<<"Number of terms to reach to the value of 3.14 : "<<terms<<endl;
    }
    return 0;
}
int pival()
{   
    int piterms=0;                      //num of terms at which 3.14 first occurs
    int terms=5;                        //number of terms to print at once
    int i=0;                            //counter for number of terms
    float pival;                        //the value of the current sum of series 
    float denom=1;                      //the denominator starts at 1 increasing by 2;
    float numer=4;                      //numerator stays same
    float sum=0;                            
    char choice='c';                    //choice for continuation
    cout << "\033[1;33m";                
    cout<<"Term#\tValue of PI\n";
    cout << "\033[0m";
    while(choice == 'C' || choice == 'c')
    {
        for(;i<terms;i++)                       //calculate and print the 5 terms of the series at once
        {
            sum= sum+ ((pow(-1,i) * numer)/(denom+2*i));
            cout<<setw(3);

            if((static_cast<int>(sum*100)/100.0) == 3.14)       //at each value check if it equals 3.14
            {
                cout << "\033[1;31m";
            }
            cout<<i+1<<"\t"<<(static_cast<int>(sum*100)/100.0)<<endl;

            if((static_cast<int>(sum*100)/100.0) == 3.14)       //at each value check if it equals 3.14
            {
                if(piterms == 0)
                {
                    piterms = i+1;       //since counter starts at 0 num of terms is one more than it
                }  
                cout << "\033[0m";        
            }
        
        }
        terms+=5;
        cin>>choice;
        if(choice == 'C' || choice == 'c')              //if c is entered continue this loop
        {
            continue;
        }
        else if(choice == 'S' || choice == 's')        // exit the loop if s is entered
        {   
            break;
        }
        while(choice != 'S' && choice != 's' && choice != 'C' && choice != 'c')
        {
            cout<<"Invalid Input"<<endl;
            cin>>choice;                                //keep prompting for valid input until it is given
            if(choice == 'S' || choice == 's')
            {   
                break;
            }
        }    
    }
    return piterms;                         //return the number of terms at which 3.14 first occured
}