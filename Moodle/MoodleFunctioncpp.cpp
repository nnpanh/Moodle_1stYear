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


void loadStudent(ifstream& f, Student*& s) {
	string temp;
<<<<<<< HEAD

=======
	
>>>>>>> 48011cfceffef52a0a8f16a6ea01efd1c8de542b
	getline(f, temp, ',');
	
	s->Num = stoi(temp);

	getline(f, s->ID, ',');
	
	getline(f, s->LastName, ',');
	getline(f, s->FirstName, ',');
	
	getline(f, temp, ',');
	if (temp[0] == 'F')
		s->Gender = 1;
	else if (temp[0] == 'M')
		s->Gender = 0;
	
	getline(f, temp, '/');
	s->Bday.Month = stoi(temp);
	getline(f, temp, '/');
<<<<<<< HEAD
	s->Bday.Date = stoi(temp);
	getline(f, temp);
	s->Bday.Year = stoi(temp); 
}

void loadClass(ifstream& f, Class CLC[], Student& s) {
	Student* temp = new Student;
	loadStudent(f, temp );
	printStudent(*temp);
	delete temp;
}
=======
	s.Bday.Date = stoi(temp);
	f >> temp;
	s.Bday.Year = stoi(temp);

}
>>>>>>> 48011cfceffef52a0a8f16a6ea01efd1c8de542b
