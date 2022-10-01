#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter elements of this array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element number " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "_____________________________________" << endl
         << endl;
    int *arrPointer = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << "Address of arr[" << i << "] " << &arr[i] << "\t Element number "
             << i + 1 << " : " << (arrPointer + i) << endl;
    }
    return 0;
}