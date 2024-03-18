#pragma once

#include "Staff.h" 
#include "Person.h" 

// Employee class inherits from the Staff class
class Employee : public Staff {
private:
    float vacHours; // Variable to store vacation hours
    float hrlyRate; // Variable to store hourly rate
public:
    
    // Default constructor initializes base class and sets vacation hours to 0
    Employee() : Staff() {
        vacHours = 0.0;
    }
    // Parameterized constructor initializes base class with given parameters
    // and sets vacation hours and hourly rate
    
    Employee(char t, string l, string f, int a, int h, float hr, float v)
        : Staff(t, l, f, a, h, hr) { // Call base class constructor
        vacHours = v; // Set vacation hours
        hrlyRate = hr; // Set hourly rate
        totalEmployees++; // Increment totalEmployees counter
    }
    // Getter function to retrieve vacation hours
    
    float getVacHours() { return vacHours; }
    // Setter function to set vacation hours
    
    void setVacHours(float v) { vacHours = v; }

    // Overridden print function to print Employee details
    
    void print() override {
        cout << type << left << setw(4) << " "
            << setw(15) << lname
            << setw(15) << fname
            << setw(5) << right << age
            << setw(10) << " " << setw(8) << "HRLY: " << hrlyRate << " " << setw(8) << "VAC DAYS: " << vacHours << endl;
    };
    static int totalEmployees; // Static member variable to count total employees
};
