#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int *addressA = &a, *addressB = &b;
    cout << "Enter first number:";
    cin >> *addressA;
    cout << "Enter second number:";
    cin >> *addressB;
    if (*addressA > *addressB)
    {
        cout << *addressA << " is grater then " << *addressB << endl;
    }
    else
    {
        cout << *addressB << " is grater then " << *addressA << endl;
    }
    return 0;
}