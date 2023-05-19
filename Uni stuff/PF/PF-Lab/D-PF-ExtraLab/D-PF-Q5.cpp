#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int matrix[3][3],sum=0;
    cout<<"enter values for matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>matrix[i][j];
        }
    }
    sum =matrix[0][1]+ matrix[0][2] +matrix[1][2];
    cout<<"The sum is "<<sum<<endl;

}