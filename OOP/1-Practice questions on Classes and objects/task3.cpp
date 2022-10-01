#include <iostream>
using namespace std;
class triangle
{
public:
    void area_Parameter(double height, double base, double side)
    {
        cout << "Area of the triangle: " << (height * base) / 2 << endl;
        cout << "Peremeter of the triangle: " << height + base + side << endl;
    }
};
int main()
{
    double height;
    double base;
    double side;
    triangle t;
    cout << "Enter the data for area and peremeter of the triangle." << endl;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter side: ";
    cin >> side;
    t.area_Parameter(height, base, side);
    return 0;
}