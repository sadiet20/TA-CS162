//implementation file for Textbook class

#include <iostream>
#include "Textbook.h"

using namespace std;


string Textbook::get_title(){
	return this->title;
}


int Textbook::get_num_pages(){
	return this->num_pages;
}


void Textbook::set_title(string t){
	this->title = t;
}


void Textbook::set_num_pages(int n){
	this->num_pages = n;
}


void Textbook::print_textbook(){
	cout << "\t" << this->title << " is " << this->num_pages << " pages" << endl;
}
