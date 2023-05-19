#include <iostream>
using namespace std;
void fun1(char);
void fun2(int);
int main()
{
    char input;
    cout<<"Enter any character : "<<endl;
    cin>>input;
    fun1(input);
}
void fun1(char in)
{   int check= static_cast<int> (in);
    if(check >= 65 && check <= 90)
    {
        cout<<"You Entered an alphabet"<<endl;
        fun2(1);
    }
    else if(check >= 97 && check <= 122)
    {
        cout<<"You Entered an alphabet"<<endl;
        fun2(0);
    }
    else if(check >= 48 && check <= 57)
    {
        cout<<"You Entered an Integer"<<endl;

    }
    
}
void fun2(int CapOrLow)
{
    if(CapOrLow == 1)
    {
        cout<<"You entered Uppercase/Capital Alphabet"<<endl;
    }
    else
    {
        cout<<"You entered Lowercase/Small Alphabet"<<endl;
    }
}