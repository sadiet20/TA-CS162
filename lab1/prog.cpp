/*
 * Lab 1 Demo by Sadie Thomas
 * 1/6/2020
 */

#include <iostream>
#include <stdlib.h>	//needed to use atoi

using namespace std;


struct Seat{
	string student;
	char style;
};

Seat** create_seating_chart(int);
void set_seating_chart(Seat**, int);
void display_seating_chart(Seat**, int);
void delete_seating_chart(Seat**&, int);


int main(int argc, char* argv[]){
	
	//argc (argument count) is the number of commandline arguments given
	//argv (argument values) is an array of c-strings
	for(int i=0; i<argc; i++){
		cout << argv[i] << endl;		//prints out each command line argument
	}

	//may need error handling before assuming this can be converted to an int (also make sure proper number of command line arguments)
	int size = atoi(argv[1]);


	//create 2d array of Seats
	Seat** seating_chart = create_seating_chart(size);


	//set member variables for each of the Seats
	set_seating_chart(seating_chart, size);


	//print out grid of Seat styles
	display_seating_chart(seating_chart, size);


	//delete memory to avoid memory leaks (need a 'delete' for every 'new')
	delete_seating_chart(seating_chart, size);


	return 0;
}


Seat** create_seating_chart(int n){
	//creates rows
	Seat** new_seating_chart = new Seat*[n];	//array of pointers
	//creates columns
	for(int i=0; i<n; i++){
		new_seating_chart[i] = new Seat[n];	//set each row element to point to another array (columns)
	}
	return new_seating_chart;
}


void set_seating_chart(Seat** seating_chart, int size){
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			cout << "Enter student assigned to Seat: ";
			cin >> seating_chart[i][j].student;	//seating_chart is 2d Seat array, must specify which aspect of the Seat we're editing
			cout << "Enter Seat style (t-table, d-desk, c-chair, r-reclining): ";
			cin >> seating_chart[i][j].style;
		}
	}
}


void display_seating_chart(Seat** seating_chart, int size){
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			//print out character representing style
			cout << seating_chart[i][j].style << ' ';
		}
		cout << endl;
	}
}


//passed the 2d array seating_chart by reference so that we can set the pointer to NULL
void delete_seating_chart(Seat**& seating_chart, int size){
	//delete in the opposite order we created
	//delete each array built off of the rows
	for(int i=0; i<size; i++){
		delete [] seating_chart[i];	//must include [] after delete to delete the entire array
		seating_chart[i] = NULL;	//set to null so that doesn't point to deleted memory
	}
	//delete the rows
	delete [] seating_chart;
	seating_chart = NULL;
}


