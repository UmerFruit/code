#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int main[5][5], sum[5]={0};
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            main[i][j]=rand()%10;
        }
    }
    cout<<"the values of the matrix are"<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<main[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int j=0;j<5;j++)
    {   
        for(int i=0;i<5;i++)
        {
            sum[j] += main[j][i];
        }
    }
    cout<<"The sum of each Row is "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<sum[i]<<endl;
    }
}