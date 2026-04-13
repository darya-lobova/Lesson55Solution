#include "logic.h"

int main() {
	int classes[DEFAULT_SIZE][DEFAULT_SIZE];

	int number_of_classes;
	int number_of_students;

	cout << "Input number of classes: ";
	cin >> number_of_classes;

	cout << "Input number of students: ";
	cin >> number_of_students;

	init_marks(classes, number_of_classes, number_of_students);

	cout <<  convert(classes, number_of_classes, number_of_students) << endl;
	
	string best_class = find_best_class(classes, number_of_classes, number_of_students);

	cout << "Best class is " << best_class << ".\n";

	return 0;
}
