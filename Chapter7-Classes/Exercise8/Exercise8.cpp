#include <iostream>
#include <string>
using namespace std;

// Structure Movie Data

struct MovieData {

	string title, director;
	int yearReleased, runningTime;

	// Default constructor
	MovieData()  {
		title = "";
		director = "";
		yearReleased = 0;
		runningTime = 0;
	}

	// Overload constructor
	MovieData(string inTitle, string inDirector, int inYear, int inRunning) {
		title = inTitle;
		director = inDirector;
		yearReleased = inYear;
		runningTime = inRunning;
	}
};

// Function prototype

void showMovieInfo(MovieData);


int main() {

	MovieData FightClub("Fight Club", "David Fincher", 1999, 120);
	MovieData GoodWillHunting("Good Will Hunting", "Steven Soderbergh", 1997, 130);

	showMovieInfo(FightClub);
	showMovieInfo(GoodWillHunting);

	return 0;
}

/*******************************************
			showMovieInfo

Intakes a MovieData struct and displays all
of its content.
*******************************************/

void showMovieInfo(MovieData item) {
	cout << "Title: " << item.title << endl;
	cout << "Director: " << item.director << endl;
	cout << "Year Released: " << item.yearReleased << endl;
	cout << "Running Time in minutes: " << item.runningTime << endl;
}

