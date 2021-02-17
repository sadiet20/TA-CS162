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


		//redefining pure virtual function from base class
		//'override' signifies that this funciton is supposed to override a virtual function (helpful for debugging, optional)
		//I don't need to write 'virtual' in derived class (but I could if I wanted Movie to be a base class for another derived class)
		void print_stats() override;

		float avg_enjoyment_per_hour();

};

//normal function (not a part of the class)
bool operator==(Movie&, Movie&);

#endif
