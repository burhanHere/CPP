#include<iostream>
using namespace std;
int main() {
	int choice = 0;
	char charToAscii = 0;
	int asciiToChar = 0;
	cout << "Enter 1 to see the ASCII of any character." << endl;
	cout << "Enter 2 to see the character of any ASCII." << endl;
	while (true)
	{
		cin >> choice;
		if (choice == 1 || choice == 2)
		{
			break;
		}
		cout << "Invalid Input!!!" << endl;
		cout << "Try Again: ";
	}
	if (choice == 1)
	{
		cout << "Enter any character to see it's ASCII: ";
		cin >> charToAscii;
		asciiToChar = charToAscii;
		cout << charToAscii << "= " << asciiToChar << endl;
	}
	else {
		cout << "Enter any ASCII to see it's character: ";
		cin >> asciiToChar;
		charToAscii = asciiToChar;
		cout << asciiToChar << "= " << charToAscii << endl;
	}
	return 0;
}