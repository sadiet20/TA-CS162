//header file for my Person class

#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person {
	private:
		string name;
		string phone_number;
	public:
		//getters
		string get_name();
		string get_phone_number();

		//setters
		void set_name(string);
		void set_phone_number(string);

};

#endif
