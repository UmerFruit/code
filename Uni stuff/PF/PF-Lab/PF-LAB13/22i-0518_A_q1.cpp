#include<iostream>
#include <cstring>
using namespace std;
void uniq(int ar[])
{   cout<<"Unique Elements are : ";
   
    
    for(int i=0;i<10;i++)
    {   
        for(int j=0;j<10;j++)
        {
            if(ar[i]== ar[j])
            {
                
            
            }
        }
   }
}

int main()
{
    int arr[10];
    cout<<"Enter the value of the array:"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    uniq (arr);

}
