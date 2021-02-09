//Tv.h - parent class


#ifndef TV_H
#define TV_H

#include <string>

using namespace std;


class Tv {
	//only this class and any derived classes can access (need for << overload operator in Movie class)
	protected:
		string title;
		string genre;
		int rating;			//personal rating out of 10

	public:
		//constructors
		Tv();						//default
		Tv(string, string, int);	//parameterized

		string get_title();
		int get_rating();

};

#endif
