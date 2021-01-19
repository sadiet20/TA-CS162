//implementation file for my Person class


#include <iostream>
#include "Person.h" 	//header file for Person class

using namespace std;


string Person::get_name(){
	return name;
}


string Person::get_phone_number(){
	return phone_number;
}


void Person::set_name(string n){
	name = n;
}


void Person::set_phone_number(string p){
	phone_number = p;
}
