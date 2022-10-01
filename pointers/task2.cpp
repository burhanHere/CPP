#include <iostream>
using namespace std;
int main()
{
    int m = 29;
    cout << "Address of m is : " << &m << endl;
    cout << "Value of m is : " << m << endl;
    cout << "Now ab is assigned with the address of m:" << endl;
    int *ab = &m;
    cout << "Address of ab is  : " << ab << endl;
    cout << "Value of ab is : " << *ab << endl;
    cout << "Value of m is updated to 34 now:" << endl;
    m = 34;
    cout << "Address of ab is  : " << ab << endl;
    cout << "Value of ab is : " << *ab << endl;
    cout << "The pointer variable ab is assigned the value of 7" << endl;
    *ab = 7;
    cout << "Address of m is : " << &m << endl;
    cout << "Value of m is : " << m << endl;

    return 0;
}
