#include "Staff.h"

//default constuctor
Staff::Staff() : Person() {
	type = ' ';
	hours = 0;
	hrlyRate = 0.0;
}

//overloded contructor
Staff::Staff(char t, string l, string f, int a, int h, float hr) :
	Person(l, f, a) {
	type = t;
	hours = h;
	hrlyRate = hr;

}

