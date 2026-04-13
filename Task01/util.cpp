#include "util.h"

void init_marks(int marks[], int size) {
	const int MAX_MARK = 10;
	const int MIN_MARK = 3;

	for (int i = 0; i < size; i++)
	{
		marks[i] = rand() % (MAX_MARK - MIN_MARK + 1) + MIN_MARK;
	}
}
string convert(int marks[], int size) {
	string s = to_string(marks[0]);

	for (int i = 1; i < size; i++)
	{
		s += " " + to_string(marks[i]);
	}return s;
}