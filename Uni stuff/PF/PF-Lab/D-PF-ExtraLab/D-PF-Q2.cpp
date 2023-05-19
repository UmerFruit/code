#include<iostream>
#include<cstring>
using namespace std;
int main()
{   const int SIZE=6;
    char str[SIZE]="Small";
    char val;
    char replace;

    cout<<"Enter Value"<<endl;
    cin>>val;

    cout<<"Enter replacement"<<endl;
    cin>>replace;
    
    for(int i=0;i<SIZE; i++)
    {
        if(val==str[i])
        {
            str[i]=replace;
        }
    }
    
    cout<<str<<endl;
    

}