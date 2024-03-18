#pragma once
#include <string>
// #include "Student.h"
using namespace std;

// Person class definition
class Person {
protected:
    char type; // Variable to store person type
    string lname; // Variable to store last name
    string fname; // Variable to store first name
    int age; // Variable to store age

public:
    Person(); // Default constructor declaration
    Person(string l, string f, int a); // Overloaded constructor declaration (needs correction)

    // Accessors for retrieving member variables
    string getFName() { return fname; } // Get first name
    string getLName() { return lname; } // Get last name
    int getAge() { return age; } // Get age

    // Mutators for modifying member variables
    void setFName(string f) { fname = f; } // Set first name
    void setLName(string l) { lname = 1; } // Set last name 
    void setAge(int a) { age = a; } // Set age

    virtual void print(); //print person details

    // Static member variable to count the number of Person objects created
    static int totalPeople;
};