/*
    Simple program to calculate r/cc moons
    Made by Umer Farooq
    30th May 2023
*/ 
#include "Headers.h"
using namespace std;
int main()
{
    float moons, pkr, usd;
    int rate, karma;

    cout << "Enter Your karma" << endl;
    cin >> karma;
    moons = karma * 0.8;
    usd = moons * 0.144;
    cout << "Enter rate of USD to PKR" << endl;
    cin >> rate;
    pkr = usd * rate;
    cout << "Moons : " << moons << endl;
    cout << "USD : "<< "$" << usd << endl;
    cout << "PKR : " << static_cast<int> (pkr) << " RPS" << endl;
    cout<<"\n\nProgram Made by Umer Barood. Hope you enjoy"<<endl;
    cout<<"\nPress any key to exit."<<endl;
    getch();
}

