//Movie.cpp - child class

#include <iostream>
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


//calls the default constructor for Tv class first
Movie::Movie(string t, string g, int r, float l){
	//then goes into the body of this function
	cout << "Executing Movie parameterized constructor" << endl;
	//can access the protected member variables of the parent class
	this->title = t;
	this->genre = g;
	this->rating = r;
	//set the member variable specific to this child class
	this->runtime = l;
}


/*
//could also use this shortcut to call the parameterized constructor for the Tv class first
Movie::Movie(string t, string g, int r, float l): Tv(t, g, r) {
	//then goes into the body of this function
	cout << "Executing Movie parameterized constructor" << endl;
	this->length = l;
}
*/



//normal function (not a part of the class)
//compares two movies based on if they have the same rating
bool operator==(Movie& m1, Movie& m2){
	return m1.get_rating()==m2.get_rating();	//must use getters since it's a normal function
}
