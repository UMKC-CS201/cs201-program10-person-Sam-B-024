#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Employee.h"
using namespace std;

//readFile function
int readFile(vector<Person>& people, vector<Student>& students, vector<Teacher>& teachers, vector<Employee>& employees, vector<Person*>& allPeople);
//int readFile(vector<Person>&,vector<Student>&,vector<Teacher>&,vector<Employee>&);

//for printVector functions
void printVector(vector<Person>);
void printVector(vector<Student>);
void printVector(vector<Employee>);
void printVector(vector<Teacher>);

void printVector(vector<Person*>);
