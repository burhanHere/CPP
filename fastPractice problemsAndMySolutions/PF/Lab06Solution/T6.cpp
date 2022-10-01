#include<iostream>
using namespace std;
int main() {
	int hour = -1;
	cout << "Enter the time in hours(24-hour pattern): ";
	while (true)
	{
		cin >> hour;
		if (hour >= 0 && hour <= 24)
		{
			break;
		}
		cout << "Invalid Input!!!" << endl;
		cout << "Try Again: ";
	}
	if (hour < 10)
	{
		cout << "GOOD Morning!!!" << endl;
	}
	else if (hour > 10 && hour < 20) {
		cout << "GOOD Day!!!" << endl;
	}
	else {
		cout << "GOOD Evening!!!" << endl;
	}
	return 0;
}