#include <iostream>
using namespace std;
int main()
{
    char arr[] = "fxiljfgdklfjbkfbjndfklbndlkfbnlgknbjkgbnjfkcbvxkjcvknvkcjnb jvknbjvcnblcvnblcvknblcvnblnblkdfnblfknvlksdmvklxnmvdjvbdkjmvdlkvnlsdkvnd";
    char *p = arr;
    int i;
    for (i = 0; *p != '\0'; i++)
    {
        p++;
        cout << ">";
    }
    cout << endl
         << "Length of the array is : " << i + 1 << endl;
    return 0;
}