/*
 * Lab 7 Demo by Sadie Thomas
 * 2/16/2021
 */

//main.cpp - driver

#include <iostream>
#include <stdexcept> 	//need for try catch block
#include "Movie.h"
#include "Show.h"


using namespace std;


int main(){
	//use parameterized constructors to create two derived objects
	Movie best_movie("Avengers Endgame", "Action", 10, 3.03);
	Show best_show("Psych", "Comedy", 10, 8);

	//try creating Tv object
	//gets compiler error bc Tv is an abstract class
	//Tv t1;
	
	//however we can create Tv pointers and references to hold derived object addresses
	//array of Tv pointers
	Tv* tv_array[2];

	//set each Tv pointer equal to the address of the derived object
	tv_array[0] = &best_movie;
	tv_array[1] = &best_show;

	cout << endl << "Using polymorphism..." << endl << endl;
	//since we used virtual, it will call the proper derived version of the function
	tv_array[0]->print_stats();
	tv_array[1]->print_stats();


	
	//create default movie (is given rating of 0)
	Movie default_movie;

	//will execute code inside try block, then if it throws an exception, jump to the catch block
	try{
		float enjoy = best_movie.avg_enjoyment_per_hour();
		cout << "The average enjoyment per hour for best_movie is... " << enjoy << endl;
		enjoy = default_movie.avg_enjoyment_per_hour();
		cout << "The average enjoyment per hour for default_movie is... " << enjoy << endl;
	}
	//catch exceptions by reference so we can read the message
	catch(invalid_argument & a){
		cout << "Error: " << a.what() << endl;			//.what() is a member function of invalid_argument (returns string from throw)
	}


	return 0;
}
