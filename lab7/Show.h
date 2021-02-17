//Show.h - child class


#ifndef SHOW_H
#define SHOW_H


#include "Tv.h"

//public inheritance: all the members of Tv keep the same accessing rights (private->private, protected->protected, public->public)
class Show : public Tv{
	private:
		int num_seasons;

	public:
		//constructors
		Show();
		Show(string, string, int, int);


		//redefining pure virtual function from base class
		//'override' signifies that this funciton is supposed to override a virtual function (helpful for debugging, optional)
		//I don't need to write 'virtual' in derived class (but I could if I wanted Show to be a base class for another derived class)
		void print_stats() override;

};


#endif
