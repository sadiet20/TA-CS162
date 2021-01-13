/*
 * Lab 2 Demo by Sadie Thomas
 * 1/12/2020
 */

//main/driver file has the main function and is where program execution begins

#include <iostream>
#include <fstream> 		//need for file input/output
#include "shopping.h"	//include the .h, not the .cpp, use " " for local files instead of < >


using namespace std;


int main(){
	
	//create file stream object for input
	ifstream fin;
	fin.open("groceries.txt");

	//make sure it opened properly
	if(!fin.is_open()){
		cout << "Error opening file" << endl;
		return 1;
	}

	int num;
	//we can use fin just like how we use cin
	fin >> num;			//total number of groceries

	//create an array of the proper size
	Grocery* grocery_list = create_grocery_list(num);

	//read file and fill array
	fill_grocery_list(grocery_list, num, fin);

	//good practice to close files as soon as you're done with them
	//cannot open a new file using the same variable until old file is closed
	fin.close();

	//create output file stream object
	ofstream fout;

	//open file to append to the end
	//if the file doesn't exist, it will create a new one
	fout.open("shopping_list.txt", ios::out | ios::app);

	//write into file
	add_to_list(grocery_list, num, fout);

	cout << "Successfully added to shopping list" << endl;

	//close output file
	fout.close();

	//delete dynamic memory
	delete_grocery_list(grocery_list);

	return 0;
}
