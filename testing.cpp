#include <iostream>
using namespace std;
// ---------------------Question # 2---------------------//
// ---------------------Syntax Errors---------------------//
// -----------Do not Run only point out Errors-------------//

class D
{
    int y;
    void walk()
    {
        cout << "walk of D" << endl;
    }

public:
    D(int y1 = 0)
    {
        y1 = y;
    }
};

class A
{

public:
    int x;
    void print()
    {
        cout << "----A----	x:" << x << endl;
    }
    A(int x1 = 0)
    {
        x = x1;
    }
};
class B : A
{
    D x;

public:
    D getx()
    {
        return x;
    }
    virtual void print() = 0;
    B(int x1, int y1) : x(y1), A(x1)
    {
    }
};
class C : B
{
public:
    int x;
    C(int x1 = 0, int x2 = 10, int x3 = 20) : B(x1, x2)
    {
        x = x3;
    }
    void print()
    {
        cout << "----C----	x:" << x << endl;
       B::print();
    }
    void fun()
    {
        cout << "its fun" << endl;
    }
};

int main()
{
   bool a = (0.1+0.2) == 0.3;
   cout<<0.1;
}