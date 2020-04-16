#ifndef _MOODLE_H_
#define _MOODLE_H_

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

struct DoB {
	int Date, Month, Year;
};

struct Student {
	int Num;
	bool Gender;
	DoB Bday;
	string ID, LastName, FirstName, BD;
};

void printStudent(Student s);
void loadStudent(ifstream& f, Student& s);

#endif // !_MOODLE_H_

