//driver file containing main
#include <iostream>
#include "Backpack.h"

using namespace std;


int main(){

	//create a backpack and fill it up
	Backpack b1;
	cout << endl << "b1:" << endl;
	b1.print_backpack();

	//use copy constructor
	Backpack b2(b1);
	cout << endl << "b2:" << endl;
	b2.print_backpack();

	//this also uses the copy constructor (because b3 is being created)
	Backpack b3 = b1;
	cout << endl << "b3:" << endl;
	b3.print_backpack();

	//make a different backpack
	Backpack b4;
	cout << endl << "b4:" << endl;
	b4.print_backpack();

	//use operator= overload
	b1 = b4;
	cout << endl << "b1 after setting equal to b4:" << endl;
	b1.print_backpack();



	return 0;
}		//all the deconstructors are called here bc this is where they go out of scope
