#include <iostream>
#include <fstream>
#include "shopping.h"	//must include corresponding .h file


using namespace std;



Grocery* create_grocery_list(int n){
	 Grocery* list = new Grocery[n];
	 return list;
}


//must pass fstream objects by reference!
void fill_grocery_list(Grocery* list, int n, ifstream& fin){
	//could loop based on n or using while(!fin.eof())
	for(int i=0; i<n; i++){
		fin >> list[i].name;
		fin >> list[i].amount;
	}
}

void add_to_list(Grocery* list, int n, ofstream& fout){
	for(int i=0; i<n; i++){
		fout << list[i].name << " ";
		fout << list[i].amount << endl;
	}
}

//passed list by reference so that I can change the pointer to NULL
void delete_grocery_list(Grocery*& list){
	delete [] list;
	list = NULL;
}
