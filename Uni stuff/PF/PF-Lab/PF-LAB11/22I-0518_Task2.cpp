#include<iostream>
using namespace std;

bool multiple(int x,int y)
{
    bool mul;
    mul=(y%x==0);
    return mul;
}

int main()
{   int n1,n2;
    bool check;
    for(int i=1;i<=3;i++)
    {
        cout<<"Enter two integers : ";
        cin>>n1>>n2;
        check=multiple(n1,n2);
        if(check==1)
        {
            cout<<n2<<" is a multiple of "<<n1<<endl;
        }
        else
        {
           cout<<n2<<" is not a multiple of "<<n1<<endl;
        }
    }
}