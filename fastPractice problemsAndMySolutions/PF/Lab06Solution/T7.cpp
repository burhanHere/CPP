#include<iostream>
using namespace std;
int main() {
	int coordinatedX;
	int coordinatedY;
	cout << "Enter X-coordinated: ";
	cin >> coordinatedX;
	cout << "Enter Y-coordinated: ";
	cin >> coordinatedY;
	if (coordinatedX == 0 && coordinatedY == 0)
	{
		cout << "The point is at Origin." << endl;
	}
	else if (coordinatedX >= 0 && coordinatedY >= 0) {
		cout << "The point is in 1st quadrant." << endl;
	}
	else if (coordinatedX <= 0 && coordinatedY >= 0) {
		cout << "The point is in 2nd quadrant." << endl;
	}
	else if (coordinatedX <= 0 && coordinatedY <= 0) {
		cout << "The point is in 3rt quadrant." << endl;
	}
	else if (coordinatedX >= 0 && coordinatedY <= 0) {
		cout << "The point is in 4th quadrant." << endl;
	}
	return 0;
}