/*
 * IOT.h
 *
 *  Created on: 07-May-2023
 *      Author: umerfarooq
 */

#ifndef IOT_H_
#define IOT_H_
#include "Patient.h"

class IOT
{
private:
	int index;
	float BMI;		// 18.5 - 24.9
	int BP[2];		// <120 and <80
	int OS;			// 95%-100%
	int HeartR;		// 60-100/min for resting
	float T;		// Temperature 37.5 ke around
	float RespRate; // Respiratory rate 25-12/min for adults
	int NCR;		// nerve conduction rate 50-60 m/s
public:
	void write(Patient p);
	void update(Patient p);
	void read(Patient p, int ind);
	friend ostream &operator<<(ostream &out, IOT &t);

};
#endif /* IOT_H_ */
