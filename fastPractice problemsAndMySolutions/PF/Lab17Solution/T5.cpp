#include<iostream>
using namespace std;
int locateTargetValue(int* arr, int sizeOfArray, int targetValue);
int main() {
	int arraySize = 0;
	int* arrayUserInput = NULL;
	int targetValue = 0;
	int subscript = 0;

	cout << "Enter the number of values you want to enter in this array: ";
	cin >> arraySize;

	arrayUserInput = new int[arraySize];

	cout << "Enter data in this array: ";
	for (int i = 0; i < arraySize; i++)
	{
		cout << i + 1 << ": ";
		cin >> arrayUserInput[i];
	}

	cout << "Enter the target value of which you want the highest index: ";
	cin >> targetValue;

	subscript = locateTargetValue(arrayUserInput, arraySize, targetValue);

	if (subscript == -1)
	{
		cout << "Value does not exist in this array." << endl;
	}
	else {
		cout << "Largest subscript of the target value: " << subscript;
	}

	return 0;
}
int locateTargetValue(int* arr, int sizeOfArray, int targetValue) {
	int subscriptOfTarget = -1;

	for (int i = 0; i < sizeOfArray; i++)
	{
		if (arr[i] == targetValue)
		{
			subscriptOfTarget = i;
		}
	}

	return subscriptOfTarget;
}