#include "MoodleHeader.h"

void printStudent(Student s) {
	cout << s.Num << " ";
	cout << s.ID << " ";
	cout << s.LastName << " " << s.FirstName << " ";
	if (s.Gender == 0)
		cout << "Female ";
	else
		cout << "Male ";

	cout << setfill('0') << setw(2) << s.Bday.Date << "/" 
		<< setfill('0') << setw(2) << s.Bday.Month << "/" 
		<< s.Bday.Year << endl;
}


void loadStudent(ifstream& f, Student& s) {
	string temp;
	
	getline(f, temp, ',');
	s.Num = stoi(temp);
	
	getline(f, s.ID, ',');
	
	getline(f, s.LastName, ',');
	getline(f, s.FirstName, ',');
	
	getline(f, temp, ',');
	if (temp[0] == 'F')
		s.Gender = 1;
	else if (temp[0] == 'M')
		s.Gender = 0;
	
	getline(f, temp, '/');
	s.Bday.Month = stoi(temp);
	getline(f, temp, '/');
	s.Bday.Date = stoi(temp);
	f >> temp;
	s.Bday.Year = stoi(temp);

}
