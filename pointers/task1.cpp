#include <iostream>
using namespace std;
int main()
{
    int m = 10;
    int *z = &m;
    int o, n;
    cout << "z stores the address of m  = " << z << endl;
    cout << "*z stores the value of m  = " << *z << endl;
    cout << "&m is the address of m = " << &m << endl;
    cout << "&o is the address of m = " << &o << endl;
    cout << "&z is the address of m = " << &z << endl;

    return 0;
}