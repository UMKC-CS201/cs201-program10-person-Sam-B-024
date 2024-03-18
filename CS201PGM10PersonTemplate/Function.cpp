#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm> // For std::replace
#include "Person.h"
#include "Function.h"
#include "Student.h"
#include "Teacher.h"
#include "Employee.h"

// Function to read data from a file and populate vectors withtypes of people
int readFile(vector<Person>& people, vector<Student>& students,
    vector<Teacher>& teachers, vector<Employee>& employees,
    vector<Person*>& allPeople) {
    // Open the input file
    ifstream inFile("people.txt");
    if (!inFile.is_open()) {
        cout << "File is not open" << endl;
        return 1; 
    }

    string inRec, tempStr;
    vector<string> row;

    // Loop through each line of the file
    while (getline(inFile, inRec)) {
        // Replace any commas within quotes with a special character '|'
        replace(inRec.begin(), inRec.end(), ',', '|');

        // Use stringstream to split the line into fields
        stringstream inSS(inRec);
        row.clear();
        while (getline(inSS, tempStr, '|')) {
            row.push_back(tempStr);
        }

        try {
            // Check the first character of the first field to determine the type of person
            if (row[0][0] == 'S') {
                // Create a Student object and add it to the students vector
                Student tempS('S', row[1], row[2], stoi(row[3]), stof(row[4]));
                students.push_back(tempS);
                // Add a pointer to the Student object to the allPeople vector
                allPeople.push_back(&students.back());
            }
            else if (row[0][0] == 'T') {
                // Create a Teacher object and add it to the teachers vector
                Teacher tempT('T', row[1], row[2], stoi(row[3]), stoi(row[4]), stof(row[5]), row[6]);
                teachers.push_back(tempT);
                // Add a pointer to the Teacher object to the allPeople vector
                allPeople.push_back(&teachers.back());
            }
            else if (row[0][0] == 'E') {
                // Create an Employee object and add it to the employees vector
                Employee tempE('E', row[1], row[2], stoi(row[3]), stoi(row[4]), stof(row[5]), stof(row[6]));
                employees.push_back(tempE);
                // Add a pointer to the Employee object to the allPeople vector
                allPeople.push_back(&employees.back());
            }
            else {
                // Create a Person object and add it to the people vector
                Person tempP(row[1], row[2], stoi(row[3]));
                people.push_back(tempP);
                // Add a pointer to the Person object to the allPeople vector
                allPeople.push_back(&people.back());
            }
        }
        catch (...) {
            cout << "Error processing record: " << inRec << endl;
        }
    }

    // Close the input file
    inFile.close();
    return 0; 
}

// Function to print the vector of Person objects
void printVector(vector<Person> p) {
    cout << "TYPE" << setw(11) << "LAST NAME"
        << setw(17) << "FIRST NAME" << setw(8) << "AGE"
        << setw(18) << "OTHER INFO" << setw(38) << "PETS" << endl;
    // Loop through each Person object in the vector and print its details
    for (int i = 0; i < p.size(); i++)
        p.at(i).print();

    // Print the total number of people
    cout << "\n\nTOTAL PEOPLE: " << Person::totalPeople << endl;
}

// Function to print the vector of Student objects
void printVector(vector<Student> s) {
    cout << "TYPE" << setw(11) << "LAST NAME"
        << setw(17) << "FIRST NAME" << setw(8) << "AGE"
        << setw(18) << "OTHER INFO" << setw(38) << "PETS" << endl;
    // Loop through each Student object in the vector and print its details
    for (int i = 0; i < s.size(); i++)
        s.at(i).print();

    // Print the total number of students
    cout << "\n\nTOTAL STUDENTS: " << Student::totalStudents << endl;
}

// Function to print the vector of Teacher objects
void printVector(vector<Teacher> t) {
    cout << "TYPE" << setw(11) << "LAST NAME"
        << setw(17) << "FIRST NAME" << setw(8) << "AGE"
        << setw(18) << "OTHER INFO" << setw(38) << "PETS" << endl;
    // Loop through each Teacher object in the vector and print its details
    for (int i = 0; i < t.size(); i++)
        t.at(i).print();

    // Print the total number of teachers
    cout << "\n\nTOTAL TEACHERS: " << Teacher::totalTeachers << endl;
}

// Function to print the vector of Employee objects
void printVector(vector<Employee> e) {
    cout << "TYPE" << setw(11) << "LAST NAME"
        << setw(17) << "FIRST NAME" << setw(8) << "AGE"
        << setw(18) << "OTHER INFO" << setw(38) << "PETS" << endl;
    // Loop through each Employee object in the vector and print its details
    for (int i = 0; i < e.size(); i++)
        e.at(i).print();

    // Print the total number of employees
    cout << "\n\nTOTAL EMPLOYEES: " << Employee::totalEmployees << endl;
}

// Function to print the vector of pointers to Person objects
void printVector(vector<Person*> all) {
    cout << "TYPE" << setw(11) << "LAST NAME"
        << setw(17) << "FIRST NAME" << setw(8) << "AGE"
        << setw(18) << "OTHER INFO" << setw(38) << "PETS" << endl;
    // Loop through each pointer to Person object in the vector and print its details
    for (int i = 0; i < all.size(); i++)
        all.at(i)->print();

    // Print the total number of people
    cout << "\n\nTOTAL PEOPLE: " << Person::totalPeople << endl;
}