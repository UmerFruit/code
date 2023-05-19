w#include<iostream>
using namespace std;
int main()
{
    int arr[10],num;
    cout<<"Enter 10 numbers"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number to check"<<endl;
    cin>>num;
    cout<<"Elements that add up to "<<num<<endl;
    int counter=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(i!=j)
            {
                if((arr[i]+arr[j] == num))
                {
                    cout<<arr[i]<<" , "<<arr[j]<<endl;
                    counter++;
                }
            }
        }
    }
    cout<<"The total number of pairs are : "<<counter<<endl;
}