// Specification file

#ifndef HEADING_HPP
#define HEADING_HPP

#include <string>

class Heading {

private:
	std::string name, reportName;

public:
	Heading();
	Heading(std::string, std::string);
	void oneLinePrint();
	void fourLinePrint();

};


#endif
