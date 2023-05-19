#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter any number for the diamond"<<endl;
    cin>>n;
    if(n%2!=0){
    for(i=0;i<(n/2)+1;i++)
    {
        for(int space=1;space<=(n/2)-i;space++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int space=1;space<= (2*(i-1)+1);space++)
        {
            cout<<" ";
        }
        if(i!=0)
        {
            cout<<"*";
        }
        for(int j=1;j<=(n/2)-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }

    for(i=i-1;i>0;i--)
    {
        for(int space=i;space<=(n/2);space++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int space=1;space<= (2*(i-1)-1);space++)
        {
            cout<<" ";
        }
        if(i!=1)
        {
            cout<<"*";
        }
        for(int j=1;j<=(n/2)-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    }
    else
    {
        cout<<"enter valid number";
    }
}
