/* 
    Name = Umer farooq
    Student ID= 22I-0518
   	Assignment #4	
*/
#include<iostream>
using namespace std;
long reverse(long num);
void palindrome();
int main()
{
    long num,rev;
    char a;
    cout<<"Enter number : "<<endl;              //input
    cin>>num;
    if(num > 0)
    {
        rev = reverse (num);                        //print reverse
        cout<<"The reversed number : "<<rev<<endl;  
    }   
    else
    {
        while(num<0)
        {
            cout<<"Enter valid num"<<endl;
            cin>>num;
        }
        rev = reverse (num);                        //print reverse
        cout<<"The reversed number : "<<rev<<endl;
    }     
    cin.ignore();                                       
    cout<<"Press any key to print palindromes from 10 to 99999"<<endl;   
    cin.get(a);                                         //wait for character to start palindrome printing
    palindrome();                                       
}
long reverse(long num)
{   long rem;
    long temp=num,numdig,sum=0;
    for(numdig=0;temp>0;numdig++)
    {
        temp=temp/10;               //count number of digits
    }
    temp=num;
    for(int i=1;i<=numdig;i++)
    {   
        rem= temp%10;
        sum = sum*10 + rem;             //add each new digit of the number to the 10's place in the reverse
        temp /= 10;                     //this reverses the number as the last digit comes to the first
    }
    return sum;                         //return the reverse number to print in main
}
void palindrome()
{   
    long rev;
    for(int i=10;i<=99999;i++)          //put the reverse() in loop and input the numbers 10 to 99999 in it
    {                                  
        rev=reverse (i);
        if(rev==i)
        {
            cout<<rev<<endl;       //if the reverse is equal to the original number the number is palindrome
        }                          //print the num if it is a palindrome
    }
}