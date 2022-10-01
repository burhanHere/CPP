#include<iostream>
using namespace std;
int main() {
	char input;
	cout << "Enter a character: ";
	while (true)
	{
		cin >> input;
		if ((input > 'A' && input > 'Z') || (input > 'a' && input > 'z')) {
			break;
		}
		cout << "Invalid Input!!!" << endl;
		cout << "Try Again: ";
	}
	if (input == 'M' || input == 'm') {
		cout << "Male" << endl;
	}
	else if (input == 'F' || input == 'f') {
		cout << "Female" << endl;
	}
	else
	{
		cout << "Unknown!!!" << endl;
	}
	return 0;
}