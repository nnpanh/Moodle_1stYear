#include "MoodleHeader.h"

int main() {
	ifstream fin("19CLC5.csv");
<<<<<<< HEAD
	Student s;

	fin.ignore(500, '\n');
	/*while(!fin.eof()){

		loadStudent(fin, s);
		printStudent(s);
	}
	fin.close();*/

	Class CLC[10];
	loadClass(fin, CLC, s);
}

=======

	Student* CLC5 = new Student[50],
		* CLC6 = new Student[5];

	fin.ignore(500, '\n');
	int i = 0;
	bool flag = true;
	while (!fin.eof()){
		loadStudent(fin, CLC5[i]);
		printStudent(CLC5[i]);
		i++;
		fin.ignore('\n');
	}

	fin.close();

	delete[] CLC6;
	delete[] CLC5;
}
>>>>>>> 48011cfceffef52a0a8f16a6ea01efd1c8de542b
