#include "logic.h"

double calculate_avg_mark(int marks[], int size) {
	double avg = 0;

	for (int i = 0; i < size; i++)
	{
		avg += marks[i];
	}
	return avg / size;
}

string find_best_class(int classes[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {

	double averages[DEFAULT_SIZE];

	for (int i = 0; i < n; i++)
	{
		averages[i] = calculate_avg_mark(classes[i], m);
	}


	int index = 0;

	for (int i = 1; i < n; i++) {
		if (averages[index] < averages[i]) {
			index = i;
		}
	}

	return "class " + to_string((char)(index + 'A'));
}