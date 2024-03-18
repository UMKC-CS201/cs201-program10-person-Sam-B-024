//Teacher.h
#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
#include "Staff.h"

class Teacher : public Staff { // Teacher class inherits from the Staff class

private:
    string subject; // Variable to store the subject taught by the teacher
    float hrlyRate; // Variable to store the hourly rate

public:
    // Default constructor declaration
    Teacher() : Staff() { // Initializes default values and increments totalTeachers count
        type = 'T'; // Set the type to 'T' indicating teacher
        subject = " "; // Initialize subject to empty string
        totalTeachers++; // Increment totalTeachers count
    }
    // Parameterized constructor declaration
    Teacher(char t, string l, string f, int a, int h, float hr, string sub) :
        Staff(t, l, f, a, h, hr) { 
        subject = sub; // Set subject to subvalue
        hrlyRate = hr; // Set hourly rate to hr value
        totalTeachers++; 
    }
    // Getter function to retrieve subject
    string getSubject() { return subject; }
    
    // Setter function to set subject
    void setSubject(string sub) { subject = sub; }

    // Overridden print function to print Teacher details
    void print() override {
        cout << type << left
            << setw(4) << " "
            << setw(15) << lname << setw(15) << fname
            << setw(5) << right << age << setw(13) << "HRLY: " << hrlyRate << setw(10) << "Subject: " << subject << endl;
    }
    static int totalTeachers; // Static member variable to count total teachers
};


