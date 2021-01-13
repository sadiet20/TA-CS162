//header guards prevent redefinition if you have multiple includes in the same program
#ifndef SHOPPING_H
#define SHOPPING_H

#include <fstream> 	//must include this since we have fstream objects in parameter list
#include <string>


//define struct
struct Grocery{
	std::string name;
	int amount;
};


//funciton prototypes - definitions are in shopping.cpp
Grocery* create_grocery_list(int);
void fill_grocery_list(Grocery*, int, std::ifstream&);
void add_to_list(Grocery*, int, std::ofstream&);
void delete_grocery_list(Grocery*&);

#endif
