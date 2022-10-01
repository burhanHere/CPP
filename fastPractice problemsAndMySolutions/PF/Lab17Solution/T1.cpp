#include<iostream>
using namespace std;
int add1(int a, int b);
int add2(int a, int b, int c);
float addF(float a, float b);
int main() {
	int selection = -1, num1 = 0, num2 = 0, num3 = 0;
	float  num1i = 0, num2i = 0;
	while (selection != 0)
	{
		cout << "Press 1 to add 2 integers." << endl;
		cout << "Press 2 to add 3 integers." << endl;
		cout << "Press 3 to add 2 floating." << endl;
		cout << "Press 0 to exit." << endl;
		while (true)
		{
			cin >> selection;
			if (selection >= 0 && selection <= 3)
			{
				break;
			}
			cout << "Invalid Input!!!" << endl;
			cout << "Try Again: ";
		}
		if (selection == 1)
		{
			cout << "Enter first number: ";
			cin >> num1;
			cout << "Enter second number: ";
			cin >> num2;
			cout << "Sum: " << add1(num1, num2) << endl;
		}
		else if (selection == 2)
		{
			cout << "Enter first number: ";
			cin >> num1;
			cout << "Enter second number: ";
			cin >> num2;
			cout << "Enter third number: ";
			cin >> num3;
			cout << "Sum: " << add2(num1, num2, num3) << endl;
		}
		else if (selection == 3)
		{
			cout << "Enter first number: ";
			cin >> num1i;
			cout << "Enter second number: ";
			cin >> num2i;
			cout << "Sum: " << addF(num1i, num2i) << endl;
		}
	}
	return 0;
}
int add2(int a, int b) {
	return a + b;
}
int add3(int a, int b, int c) {
	return a + b + c;
}
float addF(float a, float b) {
	return a + b;
}