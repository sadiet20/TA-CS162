//Tv.cpp - implementation for parent class

#include <iostream>
#include "Tv.h"


using namespace std;


Tv::Tv(){
	cout << "Executing Tv default constructor" << endl;
	this->title = "unknown title";
	this->genre = "unkown genre";
	this->rating = 0;
}


Tv::Tv(string t, string g, int r){
	cout << "Executing Tv parameterized constructor" << endl;
	this->title = t;
	this->genre = g;
	this->rating = r;
}


string Tv::get_title(){
	return this->title;
}


int Tv::get_rating(){
	return this->rating;
}
