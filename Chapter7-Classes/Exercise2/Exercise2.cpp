// Implementation file

#include "Exercise2.hpp"
#include <iostream>


/*************************************
			Default Constructor
**************************************/

Heading::Heading() {
	name = "ABC Industries";
	reportName = "Report";
}

/*************************************
			Overload Constructor
Normally would use a set function to set
these, but not going to do it because
of the simplicity of the program.
***************************************/

Heading::Heading(std::string inputName, std::string inputReport) {
	name = inputName;
	reportName = inputReport;
}

/***********************************************
				oneLinePrint

Prints out the name and report name in one line
************************************************/

void Heading::oneLinePrint() {
	std::cout << name << " " << reportName << std::endl;
}


/***********************************************
				fourLinePrint

Prints out the name and report in a four line manner.
I'm not bothering with the centering part.
************************************************/

void Heading::fourLinePrint() {
	std::cout << "**********************************" << std::endl;
	std::cout << name << std::endl;
	std::cout << reportName << std::endl;
	std::cout << "**********************************" << std::endl;
}