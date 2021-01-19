//driver file where I use the classes and functions declared in the other files

#include <iostream>
#include "Dog.h"		//include our two class header files, use " " instead of < > for local files (one's that you wrote)
#include "Person.h"

using namespace std;


int main(){

	//create a Dog object and call it d
	Dog d;

	//this doesn't print anything out because we haven't set a name yet
	cout << "Dog name: " << d.get_name() << endl;		//prints nothing for d.get_name()

	//set some member variables
	d.set_name("Rover");
	d.set_age(2);
	d.set_breed("Golden Retriever");
	
	//now we can see the dog's name
	//since get_name returns a string, we can use getters to print it out directly
	cout << "Dog name: " << d.get_name() << endl;

	
	//now let's create a person
	Person p;
	p.set_name("Tommy");
	p.set_phone_number("503-123-4567");

	//set the dog's owner
	d.set_owner(p);

	//create another person object
	Person p2;
	//we can also use getters to save the value to another variable of that type
	p2 = d.get_owner();
	//notice how we have a get_name function for both the Dog and Person objects, since each have their own scope associated with the type (Dog:: or Person::) the compiler knows which one we're refereing to
	cout << "p2: " << p2.get_name() << endl;

	//we can create another dog object and they will each have their own individual member variables
	Dog d2;
	d2.set_name("Charlie");
	d2.set_age(5);
	d2.set_breed("Lab");
	d2.set_owner(p);

	cout << "d: " << d.get_name() << endl;
	cout << "d2: " << d2.get_name() << endl;


	return 0;
}
