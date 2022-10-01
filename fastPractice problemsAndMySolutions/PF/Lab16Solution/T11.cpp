#include <iostream>
using namespace std;
int tripleByValue(int);
void tripleByReference(int&);
int main() {
	int count = 5;
	cout << "Count before call to tripleByValue() is: " << count;
	cout << "\nCount returned from tripleByValue() is: " << tripleByValue(count);
	cout << "\nCount after tripleByValue() is: " << count;
	cout << "\nCount before call to tripleByReference() is: " << count;
	tripleByReference(count);
	cout << "\nCount after call to tripleByReference() is: " << count << endl;
	cin >> count;
	return 0;


}
//a. 
int tripleByValue(int count) {
	return count *= 3;
}
//b.
void tripleByReference(int& count) {
	count *= 3;
}