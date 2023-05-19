/*
 * Patient.cpp
 *
 *  Created on: 10-May-2023
 *      Author: umerfarooq
 */
#include "Patient.h"

Patient::Patient(string i, string n, string u, string p, string di)
{
    id = i;
    name = n;
    username = u;
    password = p;
    did = di;
}
Patient Patient::rtn(string id)
{
    Patient temp;
    ifstream fin("patients.dat", ios::binary);
    while (fin.good())
    {
        fin.read(reinterpret_cast<char *>(&temp), sizeof(temp));
        if (id.compare(temp.id) == 0)
        {
            return temp;
        }
    }
    return *this;
}
int Patient::rtn()
{
    Patient temp;
    ifstream fin("patients.dat", ios::binary);
    while (fin.good())
    {
        fin.read(reinterpret_cast<char *>(&temp), sizeof(temp));
        if (username.compare(temp.username) == 0)
        {
            return stoi(temp.id);
        }
    }
}

bool Patient::user_login()
{
    int flag = 0;
    Patient temp;
    ifstream fin("patients.dat", ios::binary);
    while (fin.good())
    {
        fin.read(reinterpret_cast<char *>(&temp), sizeof(temp));
        if (temp.username == username && temp.password == password)
        {
            cout << "Login succesful" << endl;
            return true;
        }
    }

    cout << "\nLogin unsucessful" << endl;
    return false;
}

void Patient::login()
{
    cout << "Enter Username : " << endl;
    cin >> username;

    cout << "Enter Password : " << endl;
    cin >> password;
}

bool Patient::com(string id)
{
    int flag = 0;
    Patient temp;
    ifstream fin("patients.dat", ios::binary);
    while (fin.good())
    {
        fin.read(reinterpret_cast<char *>(&temp), sizeof(temp));
        if (id.compare(temp.id) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return true;
    else
        return false;
}
bool Patient::compare(string uname)
{
    int flag = 0;
    Patient temp;
    ifstream fin("patients.dat", ios::binary);
    while (fin.good())
    {
        fin.read(reinterpret_cast<char *>(&temp), sizeof(temp));
        if (uname.compare(temp.username) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return true;
    else
        return false;
}
ostream &operator<<(ostream &out, Patient &t)
{
    cout << "Patient Name: " << t.name << endl;
    cout << "Patient ID: " << t.id << endl;
    cout << "Patient Username: " << t.username << endl;
    cout << "Patient Password: " << t.password << endl;
    return out;
}
void Patient::writeEHR(EHR E)
{
    string path = "Cloud/EHR/";
    ofstream fout;
    fout.open(path + username + "_EHR.dat", ios::binary);
    fout.write(reinterpret_cast<char *>(&E), sizeof(E));
    fout.close();
}
void Patient::writeEHR()
{
    EHR E;
    char input[200];
    cout << "\nEnter Reason for Consultation : ";
    cin.getline(input, 200);
    E.setConsultation(input);
    cout << "\nEnter Prescriptions : ";
    cin.getline(input, 200);
    E.setPrescriptions(input);
    cout << "\nEnter Diet Restrictions : ";
    cin.getline(input, 200);
    E.setDiet(input);
    cout << "\nEnter Any Allergies : ";
    cin.getline(input, 200);
    E.setAllergies(input);
    for (int i = 0; i < 4; i++)
    {
        cout << "\nEnter time of Appointment " << i + 1 << " : ";
        cin.getline(input, 200);
        E.setAppointments(input, i);
    }

    // char input[200] = "Patient has a sore throat and fever.";
    // E.setConsultation(input);
    // strcpy(input, "Penicillin, 500mg, take 3 times a day for 10 days.");
    // E.setPrescriptions(input);
    // strcpy(input, "No solid food for the next 24 hours. Only drink clear liquids.");
    // E.setDiet(input);
    // strcpy(input, "Patient is allergic to penicillin.");
    // E.setAllergies(input);

    // // Set appointment times
    // strcpy(input, "8:00pm on June 12th");
    // E.setAppointments(input, 0);
    // strcpy(input, "8:00am on June 2th");
    // E.setAppointments(input, 1);
    // strcpy(input, "9:15pm on June 3th");
    // E.setAppointments(input, 2);
    // strcpy(input, "9:00am on June 4th");
    // E.setAppointments(input, 3);
    ofstream fout;
    string path = "Cloud/EHR/";
    fout.open(path + username + "_EHR.dat", ios::binary);
    fout.write(reinterpret_cast<char *>(&E), sizeof(E));
    fout.close();
}
EHR Patient::readEHR(EHR &E)
{
    string path = "Cloud/EHR/";
    ifstream fin;
    fin.open(path + username + "_EHR.dat", ios::binary);
    if (fin)
        fin.read(reinterpret_cast<char *>(&E), sizeof(EHR));
    return E;
    fin.close();
}
