#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World" << endl;
    cout << "\n";
    //"\n" and endl do almost the same thing.
    int a, b;
    cout << "Enter a number.";
    cin >> a;
    cout << "Enter b number.";
    cin >> b;
    cout << "Sum of the number=" << a + b << "\n";
    return 0;
}