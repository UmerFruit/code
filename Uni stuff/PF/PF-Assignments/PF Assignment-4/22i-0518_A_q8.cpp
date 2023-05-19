/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #4
*/ 
#include<iostream>
using namespace std;
bool isAlpha(char);
bool isDigit(char);
bool isAlnum(char);
bool isXdigit(char);
bool isLower(char);
bool isUpper(char);
bool isSpace(char);

int main()
{   
    char input;
    cout<<"Enter character : "; 
    cin.get(input);                    //input
    cout<<"The character you entered has the following characteristics : "<<endl;
    
    cout<<"Alphabet : ";
    if(isAlpha(input) == 1)
    {
        cout<<"true"<<endl;      //if it is alphabet print true
    }
    else
    {
        cout<<"false"<<endl;        
    }

    cout<<"Digit : ";
    if(isDigit(input)== 1)
    {
        cout<<"true"<<endl;     //if it is number print true
    }
    else
    {
        cout<<"false"<<endl; 
    }
    
    cout<<"Alphabet or Digit : ";
    if(isAlnum(input)== 1)
    {
        cout<<"true"<<endl;     //if it is alphabet or number print true
    }
    else
    {
        cout<<"false"<<endl;
    }
    
    cout<<"Hexadecimal : ";
    if(isXdigit(input)== 1)
    {
        cout<<"true"<<endl;         //if it is alphabet(a-f or A-F) or number print true
    }
    else
    {
        cout<<"false"<<endl;
    }
    
    cout<<"Lower-case : ";
    if(isLower(input)== 1)
    {
        cout<<"true"<<endl;         //if it is alphabet lower case(a-z) print true
    }
    else
    {
        cout<<"false"<<endl;
    }
    
    cout<<"Upper-case : ";
    
    if(isUpper(input)== 1)
    {
        cout<<"true"<<endl;         //if it is alphabet upper case(A-Z) print true
    }
    else
    {
        cout<<"false"<<endl;
    }

    cout<<"Space : ";
    if(isSpace(input)== 1)
    {
        cout<<"true"<<endl;         //if it is space character print true
    }
    else
    {
        cout<<"false"<<endl;
    }
}
bool isAlpha(char in)
{
    int check= static_cast<int> (in);
    if(check >= 65 && check <= 90)
    {
        return 1;
    }
    else if(check >= 97 && check <= 122)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool isDigit(char in)
{
    int check= static_cast<int> (in);
    if(check >= 48 && check <= 57)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool isAlnum(char in)
{
    int check= static_cast<int> (in);
    if(check >= 65 && check <= 90)
    {
        return 1;
    }
    else if(check >= 97 && check <= 122)
    {
        return 1;
    }
    else if(check >= 48 && check <= 57)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}
bool isXdigit(char in)
{
    int check= static_cast<int> (in);
    if(check >= 65 && check <= 70)
    {
        return 1;
    }
    else if(check >= 97 && check <= 102)
    {
        return 1;
    }
    else if(check >= 48 && check <= 57)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}
bool isLower(char in)
{
    int check= static_cast<int> (in);
    
    if(check >= 97 && check <= 122)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool isUpper(char in)
{
    int check= static_cast<int> (in);
    if(check >= 65 && check <= 90)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool isSpace(char in)
{   
    int check= static_cast<int> (in);
    if(check == 32)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

