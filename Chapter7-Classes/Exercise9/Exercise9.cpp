#include <iostream>
#include <string>
using namespace std;

// Structure Movie Data

struct MovieData {

	string title, director;
	int yearReleased, runningTime, productionCosts, yearOneRevenue;

	// Default constructor
	MovieData()  {
		title = "";
		director = "";
		yearReleased = 0;
		runningTime = 0;
		productionCosts = 0;
		yearOneRevenue = 0;
	}

	// Overload constructor
	MovieData(string inTitle, string inDirector, int inYear, int inRunning, int inProdCosts, int inYearOneRev) {
		title = inTitle;
		director = inDirector;
		yearReleased = inYear;
		runningTime = inRunning;
		productionCosts = inProdCosts;
		yearOneRevenue = inYearOneRev;

	}
};

// Function prototype, passing MovieData struct in by constant reference.

void showMovieInfo(const MovieData &);


int main() {

	MovieData test;
	MovieData FightClub("Fight Club", "David Fincher", 1999, 139, 63000000, 100000000 );
	MovieData GoodWillHunting("Good Will Hunting", "Steven Soderbergh", 1997, 126, 10000000, 225900000);

	showMovieInfo(FightClub);
	showMovieInfo(GoodWillHunting);
	showMovieInfo(test);

	return 0;
}

/*******************************************
			showMovieInfo

Intakes a MovieData struct as a const reference
 and displays the title, director, year released,
 running time and how much the profit or loss was.
*******************************************/

void showMovieInfo(const MovieData &item) {
	cout << "Title: " << item.title << endl;
	cout << "Director: " << item.director << endl;
	cout << "Year Released: " << item.yearReleased << endl;
	cout << "Running Time in minutes: " << item.runningTime << endl;
	cout << "The first year profit or loss was: " << item.yearOneRevenue - item.productionCosts << endl;
	cout << "Revenue and budget information was taken off each film's wikipedia page." << endl;
}

