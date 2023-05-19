/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #4
*/
#include<iostream>
using namespace std;
int GCD(int,int);
int main()
{   
    int a,b,gcd;
    cout<<"Enter any 2 numbers for GCD ";               //intput
    cin>>a>>b;
    while((a<0 && b>0) || (a>0 && b<0))
    {   cout<<"Enter both positive or both negative values"<<endl;
        cout<<"\nEnter again ";             //ask to reenter values till both positive or both negative 
        cin>>a>>b;                                    //values are entered
        
    }
    
    gcd = GCD(a,b);
        cout<<"The GCD is "<<gcd<<endl;

}
int GCD(int m,int n)
{   
    int rem,denom=n,numer=m;
    if(m>n)                             //if numerator is greater than denom
    {
        while(denom!=0)             
        {     
            rem= numer%denom;           //replace numerator with denominator
            numer=denom;                //replace denomninator with remainder
            denom= rem;                 //repeat till remaider is 0
        }
        return numer;
    }   
    else                                //if denom is greater than numerator
    {
        while(numer!=0)
        {   
            rem= denom%numer;
            denom=numer;                    //repeat process till remainder is 0
            numer = rem;
        }
        return denom;
    } 
}