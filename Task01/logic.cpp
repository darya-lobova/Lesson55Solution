#include "logic.h"

double calculate_avg_mark(int marks[], int size) {
	double avg = 0;

	for (int i = 0; i < size; i++)
	{
		avg += marks[i];
	}
	return avg / size;
}

string find_best_class(int classA[], int classB[], int classC[], int size) {

	string best_class = "class A";

	double avgA = calculate_avg_mark(classA, size);
	double avgB = calculate_avg_mark(classB, size);
	double avgC = calculate_avg_mark(classC, size);

	int count = 3;
	double averages[]{ avgA, avgB, avgC };
	string classes[]{ "A", "B", "C"};

	int index = 0;
	string cl = classes[0];

	for (int i = 1; i < count; i++)
	{
		if (averages[index] < averages[i]) {
			index = i;
			cl = classes[i];
	}

	}
	return "class " + cl;
}