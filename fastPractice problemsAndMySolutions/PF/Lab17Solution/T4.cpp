#include<iostream>
using namespace std;
int countDigits(char* arr, int size);
int main() {
	int size;
	char* arr;
	cout << "Enter the size of the array: ";
	cin >> size;
	arr = new char[size];
	cout << "Enter data in this array:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ": ";
		cin >> arr[i];
	}
	cout << "Number of digit characters in this array are: " << countDigits(arr, size) << endl;
	delete[]arr;
	return 0;
}
int countDigits(char* arr, int size) {
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= '0' && arr[i] <= '9')
			counter++;
	}
	return counter;
}