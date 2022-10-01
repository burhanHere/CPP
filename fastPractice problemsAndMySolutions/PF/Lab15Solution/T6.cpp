#include<iostream>
#include<string>
using namespace std;
int main() {

	string userInputString;
	int startingIndex = 0;
	int endingIndex = 0;
	int MAXlength = 0;
	cout << "Enter a string: ";
	getline(cin, userInputString);
	MAXlength = userInputString.length();
	cout << "MAX length of the string: " << MAXlength << endl;
	cout << "Enter starting Index:";
	while (true)
	{
		cin >> startingIndex;
		if (startingIndex >= 0 && startingIndex < MAXlength) {
			break;
		}
		cout << "Invalid Input!!!" << endl;
		cout << "Try Again:";
	}
	cout << "Enter ending Index:";
	while (true)
	{
		cin >> endingIndex;
		if (endingIndex >= startingIndex && endingIndex < MAXlength) {
			break;
		}
		cout << "Invalid Input!!!" << endl;
		cout << "Try Again:";
	}
	cout << "Section between starting and Ending Index: ";
	for (int i = startingIndex; i <= endingIndex; i++)
	{
		cout << userInputString[i];
	}

	return 0;
}