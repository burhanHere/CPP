#include<iostream>
#include<cstdlib>
using namespace std;
void initializeArray(int arr[][5]);
void displayArray(int arr[][5]);
int findLargest(int arr[][5]);
int main() {
	int arr[5][5] = { 0 };
	initializeArray(arr);
	displayArray(arr);
	cout << "largest number in the array: " << findLargest(arr) << endl;
	return 0;
}
void initializeArray(int arr[][5]) {
	int temp;
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
		repeat:
			arr[i][j] = rand() % 99;
		}
	}
}
void displayArray(int arr[][5]) {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
int findLargest(int arr[][5]) {
	int max = arr[0][0];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}