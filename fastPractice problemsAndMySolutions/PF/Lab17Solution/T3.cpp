#include<iostream>
using namespace std;
char* userInput(char*, int);
bool compare(char a, char b);
int main() {
	int size1 = 0;
	int size2 = 0;
	char* array1 = NULL;
	char* array2 = NULL;
	bool allSame = 1;
	while (true)
	{
		cout << "Enter size of first array: ";
		while (true)
		{
			cin >> size1;
			if (size1 > 0)
				break;
			cout << "Invalid Input!!!" << endl;
			cout << "Try Again: ";
		}

		cout << "Enter size of second array: ";
		while (true)
		{
			cin >> size2;
			if (size2 > 0)
				break;
			cout << "Invalid Input!!!" << endl;
			cout << "Try Again..." << endl;
		}
		if (size1 == size2)
			break;
		cout << "Size of both arrays are not equal!!!" << endl;
		cout << "Try Again..." << endl;
	}
	array1 = new char[size1] {'\0'};
	array2 = new char[size2] {'\0'};
	array1 = userInput(array1, size1);
	array2 = userInput(array2, size2);

	for (int i = 0; i < size1; i++)
	{
		allSame = compare(array1[i], array2[i]);
		if (!allSame)
		{
			break;
		}
	}
	if (allSame)
	{
		cout << "Result: " << allSame;
	}
	else
	{
		cout << "Result: " << allSame;
	}
	delete[] array1;
	delete[] array2;
	return 0;
}
char* userInput(char* array, int size) {
	cout << "Enter Data in this array:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ": ";
		cin >> array[i];
	}
	return array;
}
bool compare(char a, char b) {
	if (a == b)
	{
		return true;
	}
	else if (a == char(int(b) - 32))
	{
		return true;
	}
	else if (a == char(int(b) + 32))
	{
		return true;
	}
	else {
		return false;
	}
}