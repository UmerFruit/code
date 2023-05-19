#include<iostream>
#include <cstring>
using namespace std;
int strlen(string str)
{   int counter=0;
    for(int i=0;i<=1000;i++)
    {
        if(str[i]!= '\0')
        {
            counter++;
        }
        else
        {
            return counter;
        }
        
    }  
}
void CountFrequency(string str,char check)
{
    int counter=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==check)
        {
            counter++;
        }
    }
    cout<<"The char "<<check<<" occurs "<<counter<<" times"<<endl;
}
int main()
{   
    char check;
    string str;
    cout<<"Enter string"<<endl;
    cin>>str;
    cout<<"Enter char to check"<<endl;
    cin>>check;
    CountFrequency(str,check);
}