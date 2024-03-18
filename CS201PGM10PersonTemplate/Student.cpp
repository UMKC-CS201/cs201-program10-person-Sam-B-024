#include "Student.h"  
#include <iomanip>
#include <iostream>
using namespace std;


// Default constructor definition for Student class
// Initializes type as 'S', GPA as 0.0, and increments totalStudents count
Student::Student() : Person() {
    type = 'S';
    gpa = 0.0;
    totalStudents++;
}

// Parameterized constructor definition for Student class
// Initializes type as 'S', GPA with provided value, and increments totalStudents count
Student::Student(char t, string l, string f, int a, float g) : Person::Person(l, f, a) {
    type = 'S';
    gpa = g;
    totalStudents++;

}

