#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	int randomNumber;
	srand(time(0));
	randomNumber = rand() % 100;
	if (randomNumber > 50) {
		cout << randomNumber << " is grater the 50." << endl;
	}
	else if (randomNumber < 50)
	{
		cout << randomNumber << " is lesser the 50." << endl;
	}
	else {
		cout << randomNumber << " is average." << endl;
	}
	return 0;
}