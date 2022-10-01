#include <iostream>
using namespace std;
class average
{
private:
    double num1, num2, num3;
    void calculate_print_Avg(int a, int b, int c)
    {
        cout << "Average of the 3 numbers: " << (a * b * c) / 3;
    }

public:
    average()
    {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
        cout << "Enter num3: ";
        cin >> num3;
        calculate_print_Avg(num1, num2, num3);
    }
};
int main()
{
    average();
    return 0;
}