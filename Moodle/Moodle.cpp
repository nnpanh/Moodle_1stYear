#include "MoodleHeader.h"

int main() {
	ifstream fin("19CLC5.csv");

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