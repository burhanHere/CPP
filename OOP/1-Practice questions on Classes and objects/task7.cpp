#include <iostream>
using namespace std;
class rectangle
{
private:
    double areaRectangle(double l, double w)
    {
        return l * w;
    }

public:
    rectangle(double length, double width)
    {

        cout << "Area of rectangle: " << areaRectangle(length, width) << endl;
    }
};
int main()
{
    double length;
    double width;
    cout << "Enter lengsht: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    rectangle(length, width);
    return 0;
}