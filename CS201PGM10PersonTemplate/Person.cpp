#include <iostream>
#include <iomanip>
#include <string>

#include "Person.h"

//default constructor
Person::Person() {  //Person:: scope identifier
	type = 'P';
	lname = " ";
	fname = " ";
	age = 0;
	totalPeople++;
}

//correct the overloaded constructor
Person::Person(string l, string f, int a) {
	type = 'P';
	lname = l;
	fname = f;
	age = a;
	totalPeople++;
}

// Definition of print method for Person class
// Prints the details of the person, including type, last name, first name, and age
void Person::print() {
	cout << type << left << setw(4) << " "
		<< setw(15) << lname
		<< setw(15) << fname
		<< setw(5) << right << age << endl;
}
