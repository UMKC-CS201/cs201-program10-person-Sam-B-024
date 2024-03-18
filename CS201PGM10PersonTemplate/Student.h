#pragma once
#include <iomanip>
#include<iostream>

#include "Person.h"


// Student class definition
class Student : public Person { // Student class inherits from the Person class

private:
    float gpa; // Variable to store GPA

public:
    // Default constructor declaration
    Student();
    
    // Parameterized constructor declaration
    Student(char t, string l, string f, int a, float g);

    // Getter function to retrieve GPA
    float getGPA() { return gpa; }
    
    // Setter function to set GPA
    void setGPA(float g) { gpa = g; }

    // Overridden print function to print Student details
    void print() override {
        cout << type << left
            << setw(4) << " "
            << setw(15) << lname << setw(15) << fname
            << setw(5) << right << age << setw(13) << "GPA: " << gpa << endl;
    }

    static int totalStudents; // Static member variable to count total students
};