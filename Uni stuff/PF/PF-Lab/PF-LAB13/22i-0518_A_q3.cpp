#include<iostream>
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
void CountVowels(string str)
{   int counter=0;
    for(int i=0;i<strlen(str);i++)
    {
        switch(str[i])
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                        counter++;
                        break;
        }
    }
    cout<<"number of vowels is : "<<counter<<endl;
    
}
int main()
{
    string str;
    cout<<"Enter string"<<endl;
    cin>>str;
    CountVowels(str);
}