#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int m1[3][3],m2[3][3],sum[3][3];
    cout<<"enter values for m1"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>m1[i][j];
        }

    }
    cout<<"enter values for m2"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>m2[i][j];
        }
    }    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j]= m1[i][j] + m2[i][j];
        }
    } 

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

}