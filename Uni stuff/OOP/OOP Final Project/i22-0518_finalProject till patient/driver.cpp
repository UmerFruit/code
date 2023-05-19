#include "Headers.h"
#include "Doctor.h"
#include "EHR.cpp"
#include "Patient.cpp"
#include "IOT.cpp"
Doctor *Docset();
Patient *Patset();
Doctor rtn(string, Doctor *);
void Pmenu(Patient *, Doctor *);
int main()
{
    Doctor *dlist = Docset();
    Patient *plist = Patset();
    while (1)
    {
        system("clear");
        cout << "WELCOME TO HEALTH APP\n\n";
        cout << "1.   PATIENT LOGIN" << endl;
        cout << "2.   DOCTOR LOGIN" << endl;
        cout << "3.   EXIT" << endl;
        char ch;
        cout << "\nENTER YOUR CHOICE" << endl;
        cin >> ch;
        switch (ch)
        {

        case '1':
        {
            system("clear");
            Pmenu(plist, dlist);
            cout << "Any key to return";
            char l;
            cin >> l;
            system("clear");
            break;
        }

        case '3':
        {
            exit(0);
        }
        }
    }
    
    return 0;
}

void Pmenu(Patient *Plist, Doctor *Dlist)
{
    IOT I;
    Patient ob1;
    ob1.login();
    if (ob1.user_login())
    {

        int idx = ob1.rtn();
        I.update(Plist[idx]);
        while (1)
        {
            I.update(Plist[idx]);
            system("clear");
            cout << "\n\nWELCOME " << Plist[idx].getName() << endl;
            cout << "1.   Show EHR" << endl;
            cout << "2.   Show IOT" << endl;
            cout << "3.   New Appointment" << endl;
            cout << "4.   Logout" << endl;
            cout << "\nEnter your choice" << endl;
            int ch;
            cin >> ch;
            if (ch == 1)
            {
                system("clear");
                EHR E;
                Plist[idx].readEHR(E);
                cout << E;
                cout << "Any key to return";
                char l;
                cin >> l;
                system("clear");
            }
            else if (ch == 2)
            {
                system("clear");
                I.update(Plist[idx]);
                IOT I;
                int day;
                cout << "Enter the day for the data you want" << endl;
                cin >> day;
                I.read(Plist[idx], day - 1);
                cout << "Any key to return";
                char l;
                cin >> l;
                system("clear");
            }
            else if (ch == 3)
            {
                system("clear");
                I.update(Plist[idx]);
                cout << "Your Doctor is " << rtn(Plist[idx].getdid(), Dlist).getName() << endl;
                cout << "\nYour Current Appointments are" << endl;
                EHR E;
                Plist[idx].readEHR(E);
                for (int i = 0; i < 4; i++)
                {
                    cout << "Appointment number " << i + 1 << " : ";
                    cout << E.getAppointments(i) << endl;
                }
                char ch;
                cout << "Would you like to book new one? (y/n)" << endl;
                cin >> ch;
                if (ch == 'Y' || ch == 'y')
                {
                    cout << "\nEnter time and date : " << endl;
                    string input;
                    cin.ignore();
                    getline(cin, input, '\n');
                    string app[4];
                    for (int i = 0; i < 4; i++)
                        app[i] = E.getAppointments(i);
                    for (int i = 0; i < 3; i++)
                        swap(app[i], app[i + 1]);
                    app[3] = input;
                    for (int i = 0; i < 4; i++)
                        E.setAppointments(app[i], i);
                    Plist[idx].writeEHR(E);
                    cout << "\nYour New Appointments are" << endl;
                    for (int i = 0; i < 4; i++)
                    {
                        cout << "Appointment number " << i + 1 << " : " << E.getAppointments(i) << endl;
                    }
                }
                cout << "Any key to return";
                char l;
                cin >> l;
                system("clear");
            }
            else if (ch == 4)
            {
                system("clear");
                I.update(Plist[idx]);
                break;
            }
        }
    }
    else
        return;
}
Doctor *Docset()
{
    ifstream in("doctors.dat", ios::binary);
    Doctor *d;

    if (in)
    {
        d = new Doctor[5];
        for (int i = 0; i < 5; i++)
        {
            in.read(reinterpret_cast<char *>(&d[i]), sizeof(Doctor));
        }
    }
    else
    {
        cout << "No Doctors found" << endl;
        exit(0);
    }

    in.close();

    return d;
}
Patient *Patset()
{
    ifstream in("patients.dat", ios::binary);
    Patient *p;

    if (in)
    {
        p = new Patient[10];
        for (int i = 0; i < 10; i++)
        {
            in.read(reinterpret_cast<char *>(&p[i]), sizeof(Patient));
        }
        in.close();
    }
    else
    {
        cout << "No Patients found" << endl;
        exit(0);
    }
    in.close();
    
    return p;
}

void UpdatePlist(Patient p[], int size)
{
    ofstream out("patients.dat", ios::binary);

    for (int i = 0; i < size; i++)
        out.write(reinterpret_cast<char *>(&p[i]), sizeof(p[i]));
    out.close();
}
Doctor rtn(string id, Doctor *D)
{
    for (int i = 0; i < 5; i++)
    {
        if (id == D[i].getId())
        {
            return D[i];
        }
    }
}
