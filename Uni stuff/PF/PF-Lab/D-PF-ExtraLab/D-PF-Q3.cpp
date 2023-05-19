#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int main[5][5], sum=0;
    cout<<"Enter values for main matrix"<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>main[i][j];
        }

    }
    for (int j=0;j<5;j++)
    {   
        for(int i=0;i<5;i++)
        {
            sum += main[j][i];
        }
        cout<<sum<<" ";
    }
    
}