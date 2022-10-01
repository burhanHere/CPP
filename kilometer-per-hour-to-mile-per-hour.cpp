#include <iostream>
using namespace std;
int main()
{
    float km_h;
    cout << "Enter the spedd in KM/h" << endl;
    cin >> km_h;
    float m_h = km_h * 0.621371;
    cout << "Speed in M/h=" << m_h << endl;
    return 0;
}