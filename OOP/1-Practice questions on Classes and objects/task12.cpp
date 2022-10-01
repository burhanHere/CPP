#include <iostream>
using namespace std;
class matrixData
{
private:
	int row;
	int column;
	int numberOfElements;
	int** matrix = NULL;
	void setRow(int data);
	void setColumn(int data);

public:
	matrixData(int r, int c);						   // setRow() && setColumn is called in here.+Matrix is created here;
	int getRow(void);								   // prints the number of row of the matrix.
	int getColumn(void);							   // prints the number of column of the matrix.
	int getNumberElements(void);					   // prints the number of elements of the matrix.
	void getMatrixInfo(void);						   // print the number of rows, columns, and number of elements of the matrix.
	void setMatrixElement_ij(int i, int j, int value); // sets the value of the specific elements in the matrix.
	void deleteMatrix(void);                           //Deletes the matrices in the end.
	int getElementValue(int i, int j);                 //get the value of the matrices.
};
//userDefined Function declarations.
void matrixElementInput(matrixData mtrx);
int main()
{
	int row = 0;
	int column = 0;
	cout << "Enter info for matrix 1:" << endl;
	cout << "Enter the number of rows: ";
	cin >> row;
	cout << "Enter the number of column: ";
	cin >> column;
	matrixData mtrx1(row, column);
	mtrx1.getMatrixInfo();
	cout << "Enter info for matrix 2:" << endl;
	cout << "Enter the number of rows: ";
	cin >> row;
	cout << "Enter the number of column: ";
	cin >> column;
	matrixData mtrx2(row, column);
	mtrx2.getMatrixInfo();
	system("CLS");
	// Entering data in the matrices;
	cout << "Enter the elements of matrix 1:" << endl;
	matrixElementInput(mtrx1);
	cout << "Enter the elements of matrix 2s:" << endl;
	matrixElementInput(mtrx2);
	// select operation
	int operatinSelect = 0;
	cout << "Select the desired operation:" << endl;
	cout << "Enter 1 for addition." << endl;
	cout << "Enter 2 for Multiplication." << endl;
	while (true)
	{
		cin >> operatinSelect;
		if (operatinSelect == 1 || operatinSelect == 2)
		{
			break;
		}
		cout << "Invalid Input!!!" << endl;
		cout << "try Again: ";
	}
	if (operatinSelect == 1)
	{
		if ((mtrx1.getRow() == mtrx2.getRow()) && (mtrx1.getColumn() == mtrx2.getColumn()))
		{
			//adding & displaying the elements of both matrices.
			cout << "Result of addition:" << endl;
			for (int i = 0; i < mtrx1.getRow(); i++)
			{
				for (int j = 0; j < mtrx2.getColumn(); j++)
				{
					cout << mtrx1.getElementValue(i, j) + mtrx2.getElementValue(i, j) << '\t';
				}
				cout << endl;
			}
		}
		else
		{
			cout << "Operation can not be completed!!!" << endl;
			cout << "Number of rows and column of matrix 1 are not equal to the rows and column of matrix 2...." << endl;
		}
	}
	else // operatinSelect == 2
	{
		if ((mtrx1.getColumn() == mtrx2.getRow()) || (mtrx2.getRow() == mtrx1.getColumn()))
		{
			//multiplication & displaying elements of both matrices.
			cout << "Result of Multiplication:" << endl;
			int product = 0;
			for (int i = 0; i < mtrx1.getRow(); i++)
			{
				for (int j = 0; j < mtrx1.getColumn(); j++)
				{
					product = 0;
					for (int k = 0; k < mtrx2.getColumn(); k++)
					{
						product += mtrx1.getElementValue(i, k) * mtrx2.getElementValue(k, j);
					}
					cout << product << '\t';
				}
				cout << endl;
			}
		}
		else
		{
			cout << "Operation can not be completed!!!" << endl;
			cout << "matrices are not compatible for this operation..." << endl;
		}
	}
	mtrx1.deleteMatrix();
	mtrx2.deleteMatrix();
	return 0;
}
//class methods definitions.
void matrixData::setRow(int data)
{
	row = data;
}
void matrixData::setColumn(int data)
{
	column = data;
}
matrixData::matrixData(int r, int c)
{
	setRow(r);
	setColumn(c);
	numberOfElements = row * column;
	matrix = new int* [getRow()];
	for (int i = 0; i < getRow(); i++)
	{
		matrix[i] = new int[getColumn()];
	}
}
int matrixData::getRow(void)
{
	return row;
}
int matrixData::getColumn(void)
{
	return column;
}
int matrixData::getNumberElements(void)
{
	return numberOfElements;
}
void matrixData::getMatrixInfo(void)
{
	cout << "Number of row in this matrix are: " << getRow() << endl;
	cout << "Number of column in this matrix are: " << getColumn() << endl;
	cout << "Number of elements in this matrix are: " << getNumberElements() << endl;
}
void matrixData::setMatrixElement_ij(int i, int j, int value)
{
	matrix[i][j] = value;
}
void matrixData::deleteMatrix(void)
{
	for (int i = 0; i < getRow(); i++)
	{
		delete[] matrix[i];
	}
	delete[]matrix;
}
int matrixData::getElementValue(int i, int j)
{
	return matrix[i][j];
}
void matrixElementInput(matrixData mtrx)
{
	int value = 0;
	for (int i = 0; i < mtrx.getRow(); i++)
	{
		for (int j = 0; j < mtrx.getColumn(); j++)
		{
			cout << '[' << i << "][" << j << "]: ";
			cin >> value;
			mtrx.setMatrixElement_ij(i, j, value);
		}
	}
}