#include<iostream>
using namespace std;
int GCD(int num,int denom)
{
    int i=1,gcd;
    if(num>denom)
    {
        while(i<num)
        {
            if((num%i ==0) && (denom%i==0))
            {
                gcd=i;
            }
            i++;
        }
    }
    if(num<denom)
    {
        while(i<denom)
        {
            if((num%i ==0) && (denom%i==0))
            {
                gcd=i;
            }
            i++;
        }
    }
   return gcd;
}
void reduce(int &num, int &denom)
{   
    int x,y;
    x=num;
    y=denom;
    int gcd;
    gcd= GCD( x , y );
    num=num/gcd;
    denom /= gcd;
}
int main()
{   int x,y;
    cout<<"Enter 2 numbers ";
    cin>>x>>y;
    if(x!=0 && y!=0)
    {
    cout<<"Original Fraction : "<<x<<"/"<<y<<endl;
    reduce(x,y);
    cout<<"Reduced Fraction : "<<x<<"/"<<y<<endl;
    }
    else
    {
        cout<<"Please enter non zero values"<<endl;
    }  
}

