//Movie.h - child class


#ifndef MOVIE_H
#define MOVIE_H


#include "Tv.h"

//public inheritance: all the members of Tv keep the same accessing rights (private->private, protected->protected, public->public)
class Movie : public Tv{
	private:
		float runtime;

	public:
		//constructors
		Movie();
		Movie(string, string, int, float);

};

//normal function (not a part of the class)
bool operator==(Movie&, Movie&);

#endif
