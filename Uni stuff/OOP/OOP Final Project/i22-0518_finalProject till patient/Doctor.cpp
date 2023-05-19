/*
 * Doctor.cpp
 *
 *  Created on: 10-May-2023
 *      Author: umerfarooq
 */
#include "Doctor.h"

Doctor::Doctor(string i, string n, string u, string p, string s)
{
    id = i;
    name = n;
    username = u;
    password = p;
    spec = s;
}
void Doctor::call()
{
	// 	string pname;
	// 	cout << "1. View patient details" << endl;
	// 	cout << "2. View patients list" << endl;
	// 	cout << "3. Logout account" << endl;
	// 	int choice;
	// 	cout << "Enter your choice" << endl;
	// 	cin >> choice;
	// 	if (choice == 1)
	// 	{
	// 		Patient p;
	// 		cout << "Enter patient Id : ";
	// 		cin >> pname;
	// 		p.patient_details(pname);
	// 	}
	// 	else if (choice == 2)
	// 	{
	// 		Patient temp;
	// 		ifstream fin("patients.dat", ios::binary);
	// 		while (fin.good())
	// 		{
	// 			fin.read(reinterpret_cast<char *>(&temp), sizeof(temp));
	// 			if (id.compare(temp.id) == 0)
	// 			{
	// 				return temp;
	// 			}
	// 		}
	// 	}
}
void Doctor::dr_login()
{
	int flag = 0;
	Doctor temp;
	ifstream fin("doctors.dat", ios::binary);
	while (fin.good())
	{
		fin.read(reinterpret_cast<char *>(&temp), sizeof(temp));
		if (temp.username == username && temp.password == password)
		{
			flag++;
			cout << "Login succesful" << endl;
			break;
		}
	}
	if (flag == 0)
	{
		cout << "Login unsucessful" << endl;
	}
	else
	{
		call();
	}
}
void Doctor::login()
{
	cout << "Enter Username : " << endl;
	cin >> username;

	cout << "Enter Password : " << endl;
	cin >> password;
}

bool Doctor::com(string id)
{
	int flag = 0;
	Doctor temp;
	ifstream fin("doctors.dat", ios::binary);
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
bool Doctor::compare(string uname)
{
	int flag = 0;
	Doctor temp;
	ifstream fin("doctors.dat", ios::binary);
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
ostream &operator<<(ostream &out, Doctor &t)
{
	out << "Doctor Name: " << t.name << endl;
	out << "Doctor ID: " << t.id << endl;
	out << "Specialization: " << t.spec << endl;
	return out;
}