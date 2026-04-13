#include "util.h"

void init_marks(int marks[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	const int MAX_MARK = 10;
	const int MIN_MARK = 3;

	for (size_t i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)

		{
			marks[i][j] = rand() % (MAX_MARK - MIN_MARK + 1) + MIN_MARK;
		}
	}

}
string convert(int marks[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	string s = "";

	for (int i = 0; i < n; i++)
	{
		s += "class " + to_string((char)(i + 'A')) + ":";
		for (int j = 0; j < m; j++)
		{
			s += " " + to_string(marks[i][j]);
		}
		s += "\n";
	}

	return s;
}