#include <iostream>
#include<string>
using namespace std;
int main()
{
	int maxNumberOfCharIncode = 3;
	int countOfTotChar = 0;
	int halfLengthOfCodeString = 0;
	int secretCodeLength = 0;
	int lengthSecretCode = 0;
	int lengthSecretCodeCopy = 0;
	string secretCodeWithCopy;
	string secratCode;
	string secratCodeCopy;
	int lengthForLoopPNRINTINGtHEcODES = 0;
	bool printSpaceCopy = false;
	bool printSpace = false;

	cout << "Enter the number of characters in the code secret Code then redo code for the validation: ";
	cin >> secretCodeWithCopy;

	for (int j = 0; secretCodeWithCopy[j] != '\0'; j++)
	{
		countOfTotChar++;
	}

	halfLengthOfCodeString = countOfTotChar / 2;

	if (halfLengthOfCodeString <= 9)
	{
		halfLengthOfCodeString -= 1;
		secretCodeLength = halfLengthOfCodeString;
		secratCode = secretCodeWithCopy.substr(1, secretCodeLength);
		secratCodeCopy = secretCodeWithCopy.substr(secretCodeLength + 2);
	}
	else if (halfLengthOfCodeString <= 99)
	{
		halfLengthOfCodeString -= 2;
		secretCodeLength = halfLengthOfCodeString;
		secratCode = secretCodeWithCopy.substr(2, secretCodeLength);
		secratCodeCopy = secretCodeWithCopy.substr(secretCodeLength + 3);
	}
	else
	{
		halfLengthOfCodeString -= 3;
		secretCodeLength = halfLengthOfCodeString;
		secratCode = secretCodeWithCopy.substr(3, secretCodeLength);
		secratCodeCopy = secretCodeWithCopy.substr(secretCodeLength + 4);
	}

	lengthSecretCode = secratCode.length();

	lengthSecretCodeCopy = secratCodeCopy.length();

	(lengthSecretCode > lengthSecretCodeCopy) ? lengthForLoopPNRINTINGtHEcODES = lengthSecretCode : lengthForLoopPNRINTINGtHEcODES = lengthSecretCodeCopy;

	cout << "Code Digits\tCode Digits Copy" << endl;

	for (int i = 0; i < lengthForLoopPNRINTINGtHEcODES; i++)
	{
		if (secratCode[i] != '\0')
		{
			cout << secratCode[i];
		}
		else
		{
			printSpace = true;
		}
		if (printSpace)
		{
			cout << ' ';
		}
		cout << "\t\t";
		if (secratCodeCopy[i] != '\0')
		{
			cout << secratCodeCopy[i];
		}
		else
		{
			printSpaceCopy = true;
		}
		if (printSpaceCopy)
		{
			cout << ' ';
		}
		cout << endl;
	}

	if (secratCode.length() == secratCodeCopy.length())
	{
		if (secratCode == secratCodeCopy)
		{
			cout << "________________" << endl << "Message transmitted OK." << endl;
		}
	}
	else
	{
		cout << "________________" << endl << "Message transmitted NOT OK." << endl;
	}
	//incomplete there is an bug which is to be fixed,but the program works well.
	return 0;
}