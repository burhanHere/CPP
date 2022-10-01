#include<iostream>
using namespace std;
int qualityPoints(int a);
int main() {
	int userInput;
	cout << "Enter your Average: ";
	while (true)
	{
		cin >> userInput;
		if (userInput >= 0 && userInput <= 100)
		{
			break;
		}
		cout << "Invalid Input!!!" << endl;;
		cout << "Try Again: ";
	}
	cout << "Your Quality Points: " << qualityPoints(userInput) << endl;

	return 0;
}
int qualityPoints(int a) {
	int points = 0;
	if (a >= 60 && a <= 69)
	{
		points = 1;
	}
	else if (a >= 70 && a <= 79)
	{
		points = 2;
	}
	else if (a >= 80 && a <= 89)
	{
		points = 3;
	}
	else if (a >= 90 && a <= 100)
	{
		points = 4;
	}
	return points;
}