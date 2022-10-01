#include<iostream>
using namespace std;
int main() {
	int row = 0, column = 0;
	cout << "Enter the number of rows for the matrix: ";
	cin >> row;
	cout << "Enter the number of columns for the matrix: ";
	cin >> column;
	int** matrix = new int* [row];
	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[column];
		srand(time(0));
		for (int j = 0; j < column; j++)
		{
			matrix[i][j] = 10 + (rand() % 80);
		}
	}
	if (row == column)
	{
		cout << "This is a square matrix." << endl;
		for (int i = 0, j = 0; i < row; i++, j++)
		{
			for (int k = 0; k < i; k++)
			{
				cout << "  ";
			}
			cout << matrix[i][j] << endl;
		}
		for (int i = 0; i < row; i++)
		{
			delete[]matrix[i];
		}
		delete[]matrix;
	}
	else {
		cout << "This is not a square matrix." << endl;
	}
	return 0;
}