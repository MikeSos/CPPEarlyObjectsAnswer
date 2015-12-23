// Tips specification file

#ifndef EXERCISE6_HPP
#define EXERCISE6_HPP


class Tips {

private:
	double taxRate;

public:
	Tips();
	Tips(double);
	double computeTip(double, double);

};

#endif