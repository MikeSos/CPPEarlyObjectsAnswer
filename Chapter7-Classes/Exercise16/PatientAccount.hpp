/* Patient Account Specification File */

#ifndef PATIENTACCOUNT_HPP
#define PATIENTACCOUNT_HPP

const double dailyRate = 150.0;

class PatientAccount {
private:
	double patientCharges;
	int daysSpent;

public:
	PatientAccount();
	void setPatientCharges(double);
	void setDaysSpent(int);
	double getPatientCharges();
	int getDaysSpent();
	void incrementPatientCharges(double);
	void incrementDaysSpent(int);

};

#endif