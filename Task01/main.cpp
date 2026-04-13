#include "logic.h"

int main() {
	const int length = 10;

	int classA[DEFAULT_SIZE];
	int classB[DEFAULT_SIZE];
	int classC[DEFAULT_SIZE];

	int size;

	cout << "Input number of students: ";
	cin >> size;

	init_marks(classA, size);
	init_marks(classB, size);
	init_marks(classC, size);

	string best_class = find_best_class(classA, classB, classC, length);

	cout << "Class A marks: " << convert(classA, size) << endl;
	cout << "Class B marks: " << convert(classB, size) << endl;
	cout << "Class C marks: " << convert(classC, size) << endl;
		
	cout << "Best class is " << best_class << ".\n";

	return 0;
}
