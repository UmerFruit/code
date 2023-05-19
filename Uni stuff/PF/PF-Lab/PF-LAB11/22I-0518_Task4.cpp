#include<iostream>
using namespace std;

int volume (int length)
{
    int vol= length*length*length;
    return vol;
}
int volume (int length, int breadth ,int height)
{
     int vol= breadth*length*height;
    return vol;
}
float volume(float radius , float height)
{   const float PI= 3.141;
    float vol= PI* (radius*radius) * height ;
    return vol;
}

int main(){
    int l1,l2,b,h1;
    float r,h2;
    cout<<"Enter Length for cube"<<endl;
    cin>>l1;
    cout<<"Enter Length, Breadth and Height for cuboid"<<endl;
    cin>>l2>>b>>h1;
    cout<<"Enter radius and height for cylinder"<<endl;
    cin>>r>>h2;

    cout<<"Volume of cube = "<<volume(l1)<<endl;
    cout<<"Volume of cuboid = "<<volume(l2,b,h1)<<endl;
    cout<<"Volume of cube = "<<volume(r,h2)<<endl;

}