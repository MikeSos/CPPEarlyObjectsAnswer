// Population specification file

#ifndef EXERCISE5_HPP
#define EXERCISE5_HPP


class Population {
private:
	double currentPop, annualBirth, annualDeath;

public:
	Population(double, double, double);
	void setCurrentPop(double);
	void setAnnualBirth(double);
	void setAnnualDeath(double);
	double getBirthRate();
	double getDeathRate();

};

#endif