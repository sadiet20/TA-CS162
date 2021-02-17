//Show.cpp - child class

#include <iostream>
#include "Show.h"
#include "Tv.h"


using namespace std;


//calls default constructor for Tv class first
Show::Show(){
	//then goes into the body of this function
	//set member variables that are specific to this child class
	cout << "Executing Show default constructor" << endl;
	this->num_seasons = 0;
}


//uses shortcut to call the parameterized constructor for the Tv class first (instead of default Tv constructor)
Show::Show(string t, string g, int r, int s) : Tv(t, g, r){
	//then goes into the body of this function
	cout << "Executing Show parameterized constructor" << endl;
	this->num_seasons = s;
}


void Show::print_stats(){
	cout << "----------FEATURING----------" << endl;
	cout << this->title << endl;
	cout << "\tGenre: " << this->genre << endl;
	cout << "\tRating: " << this->rating << endl;
	cout << "\tNumber of Seasons: " << this->num_seasons << endl;
	cout << "-----------------------------" << endl;
}
