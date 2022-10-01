#include<iostream>
using namespace std;
int main() {
	int dayNumber;
	cout << "Enter a number: ";
	while (true) {
		cin >> dayNumber;
		if (dayNumber == 1)
		{
			cout << "This is Monday." << endl;
			break;
		}
		else if (dayNumber == 2)
		{
			cout << "This is Tuesday." << endl;
			break;
		}
		else if (dayNumber == 3)
		{
			cout << "This is Wednesday." << endl;
			break;
		}
		else if (dayNumber == 4)
		{
			cout << "This is Thursday." << endl;
			break;
		}
		else if (dayNumber == 5)
		{
			cout << "This is Friday." << endl;
			break;
		}
		else if (dayNumber == 6)
		{
			cout << "This is Saturday." << endl;
			break;
		}
		else if (dayNumber == 7) {
			cout << "This is Sunday." << endl;
			break;
		}
		else {
			cout << "Invalid Input!!!" << endl;
			cout << "Try Again: ";
		}
	}
	return 0;
}