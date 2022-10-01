#include <iostream>
using namespace std;
class area
{
    double length, width;

public:
    area()
    {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;
        cout << "Area of the rectangle: " << areaRectangle(length, width);
    }

private:
    double areaRectangle(double length, double width)
    {
        return length * width;
    }
};
int main()
{
    area();
    return 0;
}