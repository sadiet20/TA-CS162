//implementation for Backpack class
#include <iostream>
#include "Backpack.h"
#include "Textbook.h"

using namespace std;


Backpack::Backpack(){
	cout << "Backpack default constructor called" << endl;
	this->fill_backpack();		//gets user input to fill backpack
}


Backpack::Backpack(const Backpack& old_backpack){
	cout << "Backpack copy constructor called" << endl;

	this->color = old_backpack.color;			//can access private member variable since we're inside a member function (even though it's not the 'this' object)
	this->num_books = old_backpack.num_books;

	//don't want to just set the book pointers equal to each other
	//this->books = old_backpack.books; <--- BAD!!
	//must allocate new memory of the proper size
	this->books = new Textbook[this->num_books];

	//must go through and copy over each element
	for(int i=0; i<(this->num_books); i++){
		this->books[i] = old_backpack.books[i];		//this uses the operator equals overload automatically created by the compiles (okay in this case because there's no dynamic memory in the Textbook objects)
	}
}


//a lot like the copy constructor, but we must check if they're pointing to the same object first
Backpack& Backpack::operator=(const Backpack& old_backpack){
	cout << "Backpack operator= overload called" << endl;

	//make sure they're not already pointing to the same data (would be bad to delete then try to assign based off of deleted values)
	if(this != &old_backpack){
		if(this->num_books!=0)		//if there's something in the array
			delete [] this->books; 	//delete the memory originally in the array

		//copy over data from the old backpack
		this->color = old_backpack.color;
		this->num_books = old_backpack.num_books;
	
		//allocate dynamic memory
		this->books = new Textbook[this->num_books];

		//copy each book from one backpack to the other
		for(int i=0; i<(this->num_books); i++){
			this->books[i] = old_backpack.books[i];
		}
	}
	return *this;
}


//delete the dynamically allocated memory when the Backpack goes out of scope
Backpack::~Backpack(){
	cout << "Backpack deconstructor called" << endl;
	delete [] this->books;
	this->books = NULL;			//good practice to set pointers to NULL after we're done using them
}


//print out Backpack contents
void Backpack::print_backpack(){
	cout << "This " << this->color << " backpack has " << this->num_books << " textbooks:" << endl;
	for(int i=0; i<(this->num_books); i++){
		this->books[i].print_textbook();		
	}
	cout << endl;
}


//get user input to fill Backpack object
void Backpack::fill_backpack(){
	cout << "Backpack color: ";
	cin >> this->color;
	cout << "Number of textbooks: ";
	cin >> this->num_books;

	//create dynamic memory
	this->books = new Textbook[this->num_books];

	string title;
	int pages;
	//fill in info for each of the books
	for(int i=0; i<(this->num_books); i++){
		cout << "Title: ";
		cin >> title;
		this->books[i].set_title(title);
		cout << "Number of pages: ";
		cin >> pages;
		this->books[i].set_num_pages(pages);
	}
}

