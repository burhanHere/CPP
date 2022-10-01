#include <iostream>
using namespace std;
int main()
{
    int userInput;
    int factorial = 1;
    int *pointerToFactorial = &factorial;
    cout << "Enter a number : ";
    cin >> userInput;
    int *pointerToUserInput = &userInput;
    for (int i = 1; i <= *pointerToUserInput; i++)
    {
        *pointerToFactorial = *pointerToFactorial * i;
    }
    cout << "Factorial of " << *pointerToFactorial << endl;
    return 0;
}