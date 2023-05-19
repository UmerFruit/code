/*
 * EHR.cpp
 *
 *  Created on: 10-May-2023
 *      Author: umerfarooq
 */
#include "EHR.h"
void EHR::setAllergies(char a[])
{
    for (int i = 0; i < 200; i++)
    {
        this->allergies[i] = a[i];
    }
}
void EHR::setConsultation(char consultation[])
{
    for (int i = 0; i < 200; i++)
    {
        this->consultation[i] = consultation[i];
    }
}
void EHR::setDiet(char diet[])
{
    for (int i = 0; i < 200; i++)
    {
        this->diet[i] = diet[i];
    }
}
void EHR::setPrescriptions(char prescribtions[])
{
    for (int i = 0; i < 200; i++)
    {
        this->prescriptions[i] = prescribtions[i];
    }
}
ostream &operator<<(ostream &out, EHR &t)
{
    out << "Reason for Visit : \n"
        << t.consultation << endl<<endl;
    out << "Prescriptions : \n"
        << t.prescriptions << endl<<endl;
    for (int i = 0; i < 4; i++)
        out << "Time for Appointment " << i << " :\n"
            << t.appointments[i] << endl<<endl;

    out << "Allergies : \n"
        << t.allergies << endl<<endl;
    out << "Diet Restrictions : \n"
        << t.diet << endl<<endl;
    return out;
}