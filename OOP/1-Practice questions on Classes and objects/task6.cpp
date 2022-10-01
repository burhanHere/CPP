#include <iostream>
using namespace std;
class area
{

private:
    double length = 0, width = 0;
    void getArea()
    {
        cout << "Area of Rectangle: " << length * width << endl;
    }

public:
    void setDim()
    {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;
        getArea();
    }
};
int main()
{
    area rectangle;
    rectangle.setDim();
    return 0;
}