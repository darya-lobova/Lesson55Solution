#include <iostream>
#include <string>
#define DEFAULT_SIZE 30

using namespace std;

int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];

	int n, m;
	cout << "input size of matrix(n and m): ";
	cin >> n >> m;

	//i j k q

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 100;
		}
	}

	string s = "";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			s += to_string(matrix[i][j]) + "\t";
		}
		s += "\n";
	}

	cout << "Matrix:\n" << s << endl;

	int max = matrix[0][0];
	int min = matrix[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (max < matrix[i][j]) {
				max = matrix[i][j];
			}
			if (min > matrix[i][j]) {
				min = matrix[i][j];
			}
		}
		
	}

	cout << "Min value is " << min << ".\n";
	cout << "Max value is " << max << ".\n";

	return 0;
}