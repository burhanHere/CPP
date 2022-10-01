#include <iostream>
using namespace std;
class addDistance
{
private:
    int feet1 = 0;
    int inches1 = 0;

public:
    void feetsetter(int data, int data2)
    {
        feet1 = data;
        inches1 = data2;
    }
    addDistance(int f, int i)
    {
        feetsetter(f, i);
        cout << "Enter second distance..." << endl;
        cout << "Feet\t\tInches:" << endl;
        cin >> f >> i;
        feet1 = feet1 + f;
        inches1 = inches1 + f;
        while (inches1 >= 12)
        {
            inches1 = inches1 - 12;
            feet1++;
        }
        cout << "Total Distance:" << feet1 << "feet& " << inches1 << "inches" << endl;
    }
};
int main()
{
    int feet;
    int inches;
    cout << "Feet\t\tInches:" << endl;
    cin >> feet >> inches;
    addDistance(feet, inches);
    return 0;
}