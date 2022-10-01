#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Enter the number of hours." << endl;
    int hours;
    cin >> hours;
    cout << "Enter the number of minutes." << endl;
    int minutes;
    cin >> minutes;
    int convert_hours_to_min = hours * 60;
    int total_minutes = minutes + convert_hours_to_min;
    cout << "Total minuts=" << total_minutes;
    return 0;
}
