#include <iostream>
using namespace std;
class a
{
private:
    
public:
static int c;
    a() { cout << "a ctor." << endl;  c++;}
    ~a()
    {
        cout << "a dtor." << endl;
    }
};

int main()
{
    
    a l;
    cout<<l.c;
    
}
