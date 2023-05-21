#include <iostream>
using namespace std;
class x
{
    int d;
    public:
    x(int l=5):d(l){}
    friend void operator >>(ostream& lol,x& obj);
};
void operator >>(ostream& lol,x& obj)
{
    lol<<obj.d;
}


int main()
{
    x saifi;
    cout>>saifi;

}
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}