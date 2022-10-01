#include<iostream>
using namespace std;
int main() {
	int b[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter number: ";
		cin >> b[i];
	}
	if (b[0] < b[1] && b[0] < b[2])
	{
		cout << b[0] << "is the smallest." << endl;
	}
	else if (b[1] < b[0] && b[1] < b[2])
	{
		cout << b[1] << "is the smallest." << endl;
	}
	else if (b[2] < b[0] && b[2] < b[1])
	{
		cout << b[2] << " is the smallest." << endl;
	}
	return 0;
}