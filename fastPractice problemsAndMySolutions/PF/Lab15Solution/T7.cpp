#include<iostream>
#include<fstream>
#include<string>
void userInput();
void countAndDisplay();
using namespace std;
int main() {
	userInput();
	countAndDisplay();
	return 0;
}
void userInput() {
	string userInputLine;
	fstream readWrite;
	int lastIndexOfUserInputLineString = 0;
	char endOfText[3] = { '\0' };
	cout << "Enter you text here(Max Lines= 10)|| Enter END to end the input at any point:";
	readWrite.open("T7.txt", ios::out);
	for (int i = 0; i < 10; i++)
	{
		getline(cin, userInputLine);

		lastIndexOfUserInputLineString = userInputLine.length();
		for (int i = 2; i >= 0; i--)
		{
			endOfText[i] = userInputLine[lastIndexOfUserInputLineString - 1];
			lastIndexOfUserInputLineString--;
		}

		if (endOfText[0] == 'E' && endOfText[1] == 'N' && endOfText[2] == 'D')
		{
			userInputLine.pop_back(), userInputLine.pop_back(), userInputLine.pop_back();
			readWrite << userInputLine << endl;
			break;
		}
		readWrite << userInputLine << endl;
	}
	readWrite.close();
}
void countAndDisplay() {
	string temp;
	int counter = 0;

	fstream readWrite;
	readWrite.open("T7.txt", ios::in);

	while (!readWrite.eof())
	{
		getline(readWrite, temp);
		if (temp[0] != 'A')
		{
			cout << temp << endl;
			counter++;
		}
	}
	readWrite.close();
	cout << "Total number of lines which don't start with 'A': " << counter << endl;
}