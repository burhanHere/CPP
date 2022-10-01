#include <iostream>
using namespace std;
int main()
{
    int userInput;

    cout << "Enter a number 3 digit number: ";
    cin >> userInput;
    int *pointerToUserInput = &userInput;
    int rem;
    int *pRem = &rem;
    for (int i = 0; *pointerToUserInput > 0; i++)
    {
        *pRem = *pointerToUserInput % 10;
        *pointerToUserInput = *pointerToUserInput / 10;
        cout << *pRem;
    }

    return 0;
}