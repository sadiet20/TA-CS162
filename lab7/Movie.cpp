//Movie.cpp - child class

#include <iostream>
#include <stdexcept> 	//need for 'throw' keyword
#include "Movie.h"
#include "Tv.h"


using namespace std;


//calls default constructor for Tv class first
Movie::Movie(){
	//then goes into the body of this function
	//set member variables that are specific to this child class
	cout << "Executing Movie default constructor" << endl;
	this->runtime = 0;
}


//uses shortcut to call the parameterized constructor for the Tv class first (instead of default Tv constructor)
Movie::Movie(string t, string g, int r, float l): Tv(t, g, r) {
	//then goes into the body of this function
	cout << "Executing Movie parameterized constructor" << endl;
	this->runtime = l;
}


//normal function (not a part of the class)
//compares two movies based on if they have the same rating
bool operator==(Movie& m1, Movie& m2){
	return m1.get_rating()==m2.get_rating();	//must use getters since it's a normal function
}


void Movie::print_stats(){
	cout << "----------FEATURING----------" << endl;
	cout << this->title << endl;
	cout << "\tGenre: " << this->genre << endl;
	cout << "\tRating: " << this->rating << endl;
	cout << "\tRuntime: " << this->runtime << endl;
	cout << "-----------------------------" << endl;
}

float Movie::avg_enjoyment_per_hour(){
	if(this->runtime == 0)
		throw invalid_argument("Divide by Zero!");	//if this line executes, it will go back to main (return early from the function)

	return this->rating/this->runtime;
}


