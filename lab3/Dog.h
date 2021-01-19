//header file for my Dog class

#ifndef DOG_H
#define DOG_H

#include <string>
#include "Person.h"		//must include since we have a Person variable type


using namespace std;

class Dog {
private:				//private variables are only accessible inside member functions
	//member variables
	string name;
	string breed;
	int age;
	Person owner;
public:					//public functions can be accessed anywhere (as long as you include the .h file)
	//member functions
	//getters
	string get_name();
	string get_breed();
	int get_age();
	Person get_owner();

	//setters
	void set_name(string);
	void set_breed(string);
	void set_age(int);
	void set_owner(Person);
};


#endif
