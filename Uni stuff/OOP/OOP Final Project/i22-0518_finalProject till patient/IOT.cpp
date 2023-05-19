/*
 * IOT.cpp
 *
 *  Created on: 10-May-2023
 *      Author: umerfarooq
 */
#include "IOT.h"
ostream &operator<<(ostream &out, IOT &t)
{
    out << "Day = " << t.index + 1 << endl
        << endl;
    out << "BMI = " << t.BMI << endl;
    out << "BP = " << t.BP[0] << " - " << t.BP[1] << endl;
    out << "OS = " << t.OS << endl;
    out << "HeartR = " << t.HeartR << endl;
    out << "T = " << t.T << endl;
    out << "RespRate = " << t.RespRate << endl;
    out << "NCR = " << t.NCR << endl;
    return out;
}
void IOT::write(Patient p)
{
    srand(time(0));
    string path = "Cloud/IOT/";
    ofstream out(path + p.getUsername() + "_IOT.dat", ios::binary);
    for (int i = 0; i < 90; i++)
    {
        index = i;
        BMI = (rand() % 6 + 18) + ((rand() % 10)) / 10.0;
        BP[0] = rand() % 20 + 100;
        BP[1] = rand() % 20 + 60;
        OS = rand() % 10 + 90;
        HeartR = rand() % 40 + 60;
        T = (rand() % 2 + 37) - ((rand() % 10)) / 10.0;
        RespRate = rand() % 13 + 12;
        NCR = rand() % 10 + 50;
        out.write(reinterpret_cast<char *>(this), sizeof(IOT));
    }
    out.close();
}
void IOT::update(Patient p)
{
    string path = "Cloud/IOT/";
    static int i = 1;
    srand(time(0));
    ofstream out(path + p.getUsername() + "_IOT.dat", ios::binary | ios::app);
    index = 90 + i++;
    BMI = (rand() % 6 + 18) + ((rand() % 10)) / 10.0;
    BP[0] = rand() % 20 + 100;
    BP[1] = rand() % 20 + 60;
    OS = rand() % 10 + 90;
    HeartR = rand() % 40 + 60;
    T = (rand() % 2 + 37) - ((rand() % 10)) / 10.0;
    RespRate = rand() % 13 + 12;
    NCR = rand() % 10 + 50;
    out.write(reinterpret_cast<char *>(this), sizeof(IOT));

    out.close();
}

void IOT::read(Patient p, int ind)
{
    string path = "Cloud/IOT/";
    ifstream in(path + p.getUsername() + "_IOT.dat", ios::binary);
    for (int i = 0; i < 90; i++)
    {
        in.read(reinterpret_cast<char *>(this), sizeof(IOT));

        if (this->index == ind)
        {
            cout << *this;
            break;
        }
    }
    in.close();
}