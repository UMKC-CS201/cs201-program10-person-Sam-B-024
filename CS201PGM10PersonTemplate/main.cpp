//main.cpp
#include <iomanip>
#include "Person.h"
#include "Function.h"
#include "Student.h"
#include "Teacher.h"
#include "Employee.h"


//add Static Member initialization
int Person::totalPeople = 0;
int Student::totalStudents = 0;
int Teacher::totalTeachers = 0;
int Employee::totalEmployees = 0;

int main()
{
    // Create vectors of Person, Student, Teacher, and Employee types
    vector<Person> myPeeps;
    vector<Student> myStudents;
    vector<Teacher> myTeachers;
    vector<Employee> myEmployees;
    vector<Person*> allPeople;

    // Read the file & load into vectors
    readFile(myPeeps, myStudents, myTeachers, myEmployees, allPeople);

    // Add a new person and push it into the myPeeps vector
    Person newP;
    newP.setLName("Swift");
    newP.setFName("Taylor");
    newP.setAge(35);
    myPeeps.push_back(newP);

    // Print the vectors
    printVector(myPeeps);
    printVector(myStudents);
    printVector(myTeachers);
    printVector(myEmployees);
    printVector(allPeople);

    // Print total people, students, teachers, and employees
    cout << "\n\nTotal number of people: " << Person::totalPeople << endl;
    cout << "Total number of students: " << Student::totalStudents << endl;
    cout << "Total number of teachers: " << Teacher::totalTeachers << endl;
    cout << "Total number of employees: " << Employee::totalEmployees << endl;

    return 0;
}
	//print total people (static variable from class)
