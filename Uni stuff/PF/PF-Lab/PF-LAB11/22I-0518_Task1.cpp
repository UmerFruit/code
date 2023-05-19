#include<iostream>
#include<cmath>
using namespace std;

double hypotenuse(double b , double p)
{
    double c;
    c = sqrt((b*b)+(p*p));
    return c;
}

int main(){
     double base,perpendicular,hyp;
    for(int i =1; i<=3;i++)
    {
        cout<<"Enter 2 sides of the right triangle: ";
        cin>>base>>perpendicular;
        hyp=hypotenuse(base,perpendicular);
        cout<<"Hypotenuse: "<<hyp<<endl;
    }

}