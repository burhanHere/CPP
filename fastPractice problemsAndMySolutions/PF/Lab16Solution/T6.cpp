#include<iostream>
using namespace std;
bool isVowel(char a);
int main() {
	char userInput;
	cout << "Enter a character: ";
	cin >> userInput;
	cout << ((isVowel(userInput) == 1) ? "True" : "False") << endl;

	return 0;
}
bool isVowel(char a) {
	if (a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' || a == 'O' || a == 'o' || a == 'U' || a == 'u')
	{
		return true;
	}
	else {
		return false;
	}
}