#include<iostream>
using namespace std;
int main() {
	int row = 0, column = 0;
	cout << "Enter the number of rows for the matrix: ";
	cin >> row;
	cout << "Enter the number of columns for the matrix: ";
	cin >> column;
	int** matrix = new int* [row];
	cout << "Enter elements of the transpose:" << endl;
	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[column];
		for (int j = 0; j < column; j++)
		{
			cout << '[' << i << "][" << j << "]: ";
			cin >> matrix[i][j];
		}
	}
	cout << "Original matrix(values are assigned automatically):" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "Matrix after transpose:" << endl;
	int** transpose = new int* [column];
	for (int i = 0; i < column; i++)
	{
		transpose[i] = new int[row];
		for (int j = 0; j < row; j++)
		{
			transpose[i][j] = matrix[j][i];
			cout << transpose[i][j] << "  ";
		}
		cout << endl;
	}
	for (int i = 0; i < row; i++)
	{
		delete[]matrix[i];
	}
	for (int i = 0; i < column; i++)
	{
		delete[]transpose[i];
	}
	delete[]matrix;
	delete[]transpose;
	return 0;
}