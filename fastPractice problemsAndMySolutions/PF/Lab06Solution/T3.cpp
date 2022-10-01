#include<iostream>
using namespace std;
int main() {
	int a;
	cout << "Enter a number:";
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "____" << endl << a << " is even." << endl;
	}
	else {
		cout << "____" << endl << a << " is odd." << endl;
	}
	return 0;
}