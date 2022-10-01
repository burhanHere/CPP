#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int *addressA = &a, *addressB = &b;
    cout << "Enter first number: " << endl;
    cin >> *addressA;
    cout << "Enter second number: " << endl;
    cin >> *addressB;
    int sum = (*addressA) + *addressB;
    cout << "Sum of the numbers : " << sum << endl;

    return 0;
}