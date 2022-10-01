#include<iostream>
using namespace std;
int  reverseInt(long int number);
int main() {
	long int userInput = 0;
	cout << "Enter a number: ";
	cin >> userInput;
	userInput = reverseInt(userInput);
	cout << userInput << endl;

	return 0;
}
int reverseInt(long int number) {
	long int reversed = 0;
	long int rem = 0;
	while (number > 0)
	{
		rem = (number % 10);
		reversed = reversed * 10 + rem;
		number = number / 10;
	}

	return reversed;
}