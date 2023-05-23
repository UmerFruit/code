#include <iostream>
using namespace std;
class a
{
private:
    /* data */
public:
    a() { cout << "a ctor." << endl; }
    ~a()
    {
        cout << "a dtor." << endl;
    }
};

class b : public a
{
private:
    /* data */
public:
    b() { cout << "b ctor." << endl; }
    ~b() { cout << "b dtor." << endl; }
};
class c : public b
{
private:
    /* data */
public:
    c() { cout << "c ctor." << endl; }
    ~c() { cout << "c dtor." << endl; }
};
class d : public c
{
private:
    /* data */
public:
    d() { cout << "d ctor." << endl; }
    ~d() { cout << "d dtor." << endl; }
};

int main()
{
    int a = 5;
    int *ptr = &a;
    int **dp = &ptr;
    cout<<(**&*&*dp);

}
