#include "MoodleHeader.h"

int main() {
	ifstream fin("19CLC5.csv");
	Student s;
	for (int i = 0; i < 5; i++) {
		loadStudent(fin, s);
		printStudent(s);
	}
	fin.close();
}