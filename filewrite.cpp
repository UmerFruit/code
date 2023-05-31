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
int main()
{
    srand(time(0));
    int rate, pkr, usd, moons;
    ofstream fout("moons.txt");
    fout << setw(10) << left << "Date"
    << setw(10) << left << "Karma"
    << setw(10) << left << "Moons"
         << setw(10) << left << "USD"
         << setw(10) << left << "Rate"
         << setw(10) << left << "PKR" << endl;

        // fout << setw(10) << left << rtime()
        //      << setw(10) << left << moons
        //      << setw(10) << left << usd
        //      << setw(10) << left << rate
        //      << setw(10) << left << pkr << endl;
    
}
