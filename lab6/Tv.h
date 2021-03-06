//Tv.h - parent class


#ifndef TV_H
#define TV_H

#include <string>

using namespace std;


class Tv {
	//only this class and any derived classes can access protected member variables
	protected:
		string title;
		string genre;
		int rating;			//personal quality rating of movie (out of 10)

	//anyone can access
	public:
		//constructors
		Tv();						//default
		Tv(string, string, int);	//parameterized


		//getters
		string get_title();
		int get_rating();

};

#endif
