//main.cpp - driver

#include <iostream>
#include "Movie.h"


using namespace std;


int main(){
	//parameterized constructors
	Movie best_movie("Avengers Endgame", "Action", 10, 3.03);
	cout << endl;
	Movie another_best_movie("Night at the Museum", "Comedy", 10, 3.03);
	cout << endl;

	//default constructor (sets title to "unkown title" and rating to 0)
	Movie default_movie;


	//test our equality operator overload (==) which compares the ratings of the two movies


	cout << "\nComparing best_movie and another_best_movie..." << endl;
	if(best_movie==another_best_movie){
		cout << "\t" << best_movie.get_title() << " and " << another_best_movie.get_title() << " have the same rating!" << endl;
	}
	else{
		cout << "\t" << best_movie.get_title() << " and " << another_best_movie.get_title() << " have different ratings" << endl;
	}


	cout << "\nComparing best_movie and default_movie..." << endl;
	if(best_movie==default_movie){
		cout << "\t" << best_movie.get_title() << " and " << default_movie.get_title() << " have the same rating!" << endl;
	}
	else{
		cout << "\t" << best_movie.get_title() << " and " << default_movie.get_title() << " have different ratings" << endl;
	}

	cout << endl;


	return 0;
}
