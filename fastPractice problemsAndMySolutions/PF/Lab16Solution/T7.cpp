#include<iostream>
using namespace std;
double cube(double a);
int main() {
	double userInput;
	cout << "Enter the number to take it's cube: ";
	cin >> userInput;
	cout << cube(userInput);

	return 0;
}
double cube(double a) {
	return a * a * a;
}