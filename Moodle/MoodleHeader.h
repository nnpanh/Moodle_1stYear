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
	string ID, LastName, FirstName;
<<<<<<< HEAD
	Student* nextStudent;
};

struct Class {
	int Size; 
=======
};

struct Class {
>>>>>>> 48011cfceffef52a0a8f16a6ea01efd1c8de542b
	Student* pStudent;
};

void printStudent(Student s);
<<<<<<< HEAD
void loadStudent(ifstream& f, Student*& s);
=======
void loadStudent(ifstream& f, Student& s);
void saveClass(ofstream& f, Student* pStudent);
>>>>>>> 48011cfceffef52a0a8f16a6ea01efd1c8de542b

void loadClass(ifstream& f, Class CLC[], Student& s);
#endif // !_MOODLE_H_

