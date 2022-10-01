#include<iostream>
using namespace std;
int main() {
	//a.
	cout << pow(2.0, 5.2) << endl;

	//b.
	double x = 0, y = 0;
	cout << "Enter value of x: ";
	cin >> x;
	cout << "Enter value of y: ";
	cin >> y;
	cout << sqrt(x + y);

	//c.
	cout << "Enter value of x: ";
	cin >> x;
	cout << "Enter value of y: ";
	cin >> y;
	cout << pow(x, y - 3);

	//d.
	double z = 0;
	cout << "Enter value of x: ";
	cin >> x;
	cout << "Enter value of y: ";
	cin >> y;
	cout << "Enter value of z: ";
	cin >> z;
	cout << (-y + sqrt(pow(y, 2) - 4 * x * z)) / 2 * x;

	//e.
	cout << "Enter value of x : ";
	cin >> x;
	cout << fabs(x + 2.5);

	return 0;
}