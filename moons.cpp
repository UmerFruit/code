/*
    Simple program to calculate r/cc moons
    Made by Umer Farooq
    30th May 2023
*/
#include "Headers.h"
using namespace std;
string rtime()
{
    time_t t;      // t passed as argument in function time()
    struct tm *tt; // decalring variable for localtime()
    time(&t);      // passing argument to time()
    tt = localtime(&t);
    char *total = asctime(tt);
    strtok(total, " ");
    char *m = strtok(NULL, " ");
    char *d = strtok(NULL, " ");
    string date(d);
    string month(m);
    string damon = date + " " + month;
    return damon;
}
void write(float moons,float pkr,float usd,int rate,int karma)
{
    ofstream fout("moons.txt", ios::app);
    fout << setw(10) << left << rtime()
         << setw(10) << left << karma
         << setw(10) << left << moons
         << setw(10) << left << usd
         << setw(10) << left << rate
         << setw(10) << left << pkr << endl;
}
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
    cout << "USD : "
         << "$" << usd << endl;
    cout << "PKR : " << static_cast<int>(pkr) << " RPS" << endl;
    cout << "\nProgram Made by Umer Barood. Hope you enjoy" << endl;
    cout << "\nPress any key to exit." << endl;
    write(moons,pkr,usd,rate,karma);
    getch();
}
