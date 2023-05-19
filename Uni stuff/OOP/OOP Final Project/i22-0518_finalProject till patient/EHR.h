/*
 * EHR.h
 *
 *  Created on: 06-May-2023
 *      Author: umerfarooq
 */

#ifndef EHR_H_
#define EHR_H_

#include "Doctor.cpp"
class EHR
{
private:
    char consultation[200];
    string appointments[4];
    char prescriptions[200];
    char diet[200];
    char allergies[200];
    
public:
    friend ostream &operator<<(ostream &out, EHR &t);
    string getAppointments(int idx){return appointments[idx];}
    void setAllergies(char a[]);
   
    void setAppointments(string app, int idx) { appointments[idx] = app; }
    void setConsultation(char consultation[]);
   
    void setDiet(char diet[]);
    
    void setPrescriptions(char prescribtions[]);
   
};


#endif /* EHR_H_ */
