#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Enter the number of minutes." << endl;
    int minutes;
    cin >> minutes;
    int hours_out_of_minutes = minutes / 60;
    int remaining_minutes = minutes % 60;
    cout << "Hours=" << hours_out_of_minutes << "\tMinutes=" << remaining_minutes;
    return 0;
}
