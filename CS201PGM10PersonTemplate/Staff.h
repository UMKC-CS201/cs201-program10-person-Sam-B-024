#pragma once
#include "Person.h"

class Staff : public Person { // Staff class inherits from the Person class

protected:
    int hours; // Variable to store hours
    float hrlyRate; // Variable to store hourly rate

public:
    Staff(); // Default constructor declaration
    Staff(char t, string l, string f, int a, int h, float hr); // Parameterized constructor declaration
    int getHours() { return hours; } // Getter function to retrieve hours
    float gethrlyRate() { return hrlyRate; } // Getter function to retrieve hourly rate
    void setHours(int h) { hours = h; } // Setter function to set hours
    void setHrlyRate(float hr) { hrlyRate = hr; } // Setter function to set hourly rate

    virtual void print() = 0; //makes Staff an abstract class
};



