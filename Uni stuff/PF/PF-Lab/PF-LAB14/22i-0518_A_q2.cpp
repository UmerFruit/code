#include<iostream>
using namespace std;
void reverse(int arr[][3]);
int main()
{
   int arr[3][3];
   cout<<"Enter values"<<endl;
   for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    reverse(arr);
}
void reverse(int main[][3])
{
    int rev[3][3];
    int l;
    int k;
    l=2;
    for(int i=0;i<3;i++)
    {
        k=2;
        for(int j=0;j<3;j++)
        {
            
            rev[i][j]= main[l][k];
            k--;  
        }
        l--;
    }
    cout<<"Reverse is : "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<rev[i][j]<<" ";
        }
        cout<<endl;
    }
    

}