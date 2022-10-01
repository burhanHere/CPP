#include<iostream>
using namespace std;
void process(int a, char b);
int main() {
	int a;
	char b;
	cout << "Enter the size: ";
	cin >> a;
	cout << "Enter the character: ";
	cin >> b;
	process(a, b);

	return 0;
}
void process(int a, char b) {
	for (int i = 0; i < a; i++)
	{
		for (int i = 0; i < a; i++)
		{
			cout << b << ' ';
		}
		cout << endl;
	}
}