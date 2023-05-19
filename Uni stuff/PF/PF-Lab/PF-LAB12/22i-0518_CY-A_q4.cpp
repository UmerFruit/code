#include <iostream>
using namespace std;
void multiple()
{
    static int counter=0;
    ++counter;
    cout<<"The function was called "<<counter<<" times."<<endl;
}
int main()
{
    int num;
    cout<<"How many times should the function be called? "<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        multiple();
    }
    
}
