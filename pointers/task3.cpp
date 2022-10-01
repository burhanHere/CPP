#include <iostream>
using namespace std;
int main()
{
    cout << "_____________________________________________________" << endl;
    cout << "Pointer :  Demonstrate the use of & and * operator : " << endl;
    cout << "_____________________________________________________" << endl;
    int m = 3;
    float fx = 300.600006;
    char cht = 'z';
    cout << " m = " << m << endl
         << " fx = " << fx << endl
         << " cht = " << cht << endl;
    cout << "____________________" << endl;
    cout << "Using & operaor : " << endl;
    cout << "____________________" << endl;
    cout << "Address of m : " << &m << endl;
    cout << "Address of fx : " << &fx << endl;
    cout << "Address of cht : " << &cht << endl;
    cout << "_______________________" << endl;
    cout << "Using & and * operaor : " << endl;
    cout << "_______________________" << endl;
    int *address_m = &m;
    float *address_fx = &fx;
    char *address_cht = &cht;
    cout << "Value of m is : " << *address_m << endl;
    cout << "Value of fx is : " << *address_fx << endl;
    cout << "Value of cht is : " << *address_cht << endl;
    cout << "_______________________" << endl;
    cout << "Using only pointer variable : " << endl;
    cout << "_______________________" << endl;
    cout << "Address of m is : " << address_m << endl;
    cout << "Address of fx is : " << address_fx << endl;
    cout << "Address of cht is : " << address_cht << endl;
    cout << "_______________________" << endl;
    cout << "Using pointer operaor : " << endl;
    cout << "_______________________" << endl;
    cout << "Value of m is : " << *address_m << endl;
    cout << "Value of fx is : " << *address_fx << endl;
    cout << "Value of cht is : " << *address_cht << endl;
    return 0;
}