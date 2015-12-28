// Stats specification file

#ifndef EXERCISE9_HPP
#define EXERCISE9_HPP



class Stats {
private:
	double theArray[30];
	int currentPosition;

public:
	Stats();
	bool storeValue(double);
	double getTotal();
	double getAverage();
	double getLowest();
	double getHighest();

};

#endif