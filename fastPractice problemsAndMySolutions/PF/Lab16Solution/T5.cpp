#include<iostream>
using namespace std;
bool checkMultiple(int firstNumber, int secindNumber);
int main() {
	int firstNumber = 0;
	int secindNumber = 0;
	cout << "Enter first number: ";
	cin >> firstNumber;
	cout << "Enter first number: ";
	cin >> secindNumber;

	cout << ((checkMultiple(firstNumber, secindNumber) == 1) ? "True" : "False");

	return 0;
}
bool checkMultiple(int firstNumber, int secindNumber) {
	if (firstNumber % secindNumber == 0)
	{
		return true;
	}
	else {
		return false;
	}
}