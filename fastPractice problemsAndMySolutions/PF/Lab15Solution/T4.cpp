#include<iostream>
#include<stdlib.h>//added to use exit()
using namespace std;
void userInput(int& matrix1Rows, int& matrix1Column, int& matrix2Rows, int& matrix2Column, int**& matrix1, int**& matrix2);
int main() {
	int matrix1Rows = 0, matrix1Column = 0, matrix2Rows = 0, matrix2Column = 0;
	int** matrix1, ** matrix2, ** finalMatrix;
	userInput(matrix1Rows, matrix1Column, matrix2Rows, matrix2Column, matrix1, matrix2);
	finalMatrix = new int* [matrix1Rows];
	for (int i = 0; i < matrix1Rows; i++)
	{
		finalMatrix[i] = new int[matrix2Column];
		for (int j = 0; j < matrix2Column; j++)
		{
			finalMatrix[i][j] = 0;
			for (int k = 0; k < matrix1Rows; k++)
			{

				finalMatrix[i][j] += (matrix1[i][k] * matrix2[k][j]);

			}
			cout << finalMatrix[i][j] << "  ";
		}
		cout << endl;
	}
	//deleting matrix
	for (int i = 0; i < matrix1Rows; i++)
	{
		delete[]matrix1[i];
		delete[]finalMatrix;
	}
	for (int i = 0; i < matrix2Rows; i++)
	{
		delete[]matrix2[i];
	}
	delete[]matrix1;
	delete[]matrix2;
	delete[]finalMatrix;
	return 0;
}
void userInput(int& matrix1Rows, int& matrix1Column, int& matrix2Rows, int& matrix2Column, int**& matrix1, int**& matrix2) {
	cout << "Enter number of rows of first matrix: ";
	cin >> matrix1Rows;
	cout << "Enter number of columns of first matrix: ";
	cin >> matrix1Column;
	cout << "Enter number of rows of second matrix: ";
	cin >> matrix2Rows;
	cout << "Enter number of columns of second matrix: ";
	cin >> matrix2Column;
	if (matrix1Rows == matrix2Column)
	{
		cout << "The matrix is eligible for the multiplication." << "Now," << endl;
		cout << "Enter the elements of first matrix:" << endl;
		matrix1 = new int* [matrix1Rows];
		for (int i = 0; i < matrix1Rows; i++)
		{
			matrix1[i] = new int[matrix1Column];
			for (int j = 0; j < matrix1Column; j++)
			{
				cout << '[' << i << "][" << j << "]: ";
				cin >> matrix1[i][j];
			}
			cout << endl;
		}
		cout << "Enter the elements of second matrix:" << endl;
		matrix2 = new int* [matrix2Rows];
		for (int i = 0; i < matrix2Rows; i++)
		{
			matrix2[i] = new int[matrix2Column];
			for (int j = 0; j < matrix2Column; j++)
			{
				cout << '[' << i << "][" << j << "]: ";
				cin >> matrix2[i][j];
			}
			cout << endl;
		}
	}
	else
	{
		cout << "The matrix is not eligible for the multiplication. Number of row of first matrix should be equal to the number of columns of the second matrix." << endl;
		exit(1);
	}

}