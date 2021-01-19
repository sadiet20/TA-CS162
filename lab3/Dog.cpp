//implementation file for my Dog class

#include <iostream>
#include "Dog.h" 		//inlude the corresponding .h file
#include "Person.h" 	//include this since we're referring to a Person type

using namespace std;


//MUST have the scope operator so the compiler knows which class it belongs to
string Dog::get_name(){
	return name;		//can access private member variables in member functions
}


string Dog::get_breed(){
	return breed;
}


int Dog::get_age(){
	return age;
}


Person Dog::get_owner(){
	return owner;
}


void Dog::set_name(string n){
	name = n;
}


void Dog::set_breed(string b){
	breed = b;
}


void Dog::set_age(int a){
	age = a;
}


void Dog::set_owner(Person p){
	owner = p;
}
