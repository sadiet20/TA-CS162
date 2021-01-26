//header file for Backpack class

#ifndef BACKPACK_H
#define BACKPACK_H

#include "Textbook.h"


class Backpack{
private:
	std::string color;
	Textbook* books;
	int num_books;

public:
	//default constructor
	Backpack();



	//THE BIG THREE (deletes/copies over dynamically allocated member variables)

	//copy constructor
	Backpack(const Backpack&);

	//deconstructor (NEED bc of dynamic memory!)
	~Backpack();

	//operator equals overload
	Backpack& operator=(const Backpack&);


	//populate Backpack
	void fill_backpack();

	//see contents of Backpack
	void print_backpack();

};

#endif
