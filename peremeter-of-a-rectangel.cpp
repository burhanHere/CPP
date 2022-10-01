#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Enter the height of the rectangel." << endl;
    float h;
    cin >> h;
    cout << "Enter the width of the rectangle." << endl;
    float w;
    cin >> w;
    //Use this
    float p = 2 * (h + w);
    //or this
    float p = (h + h + w + w);
    cout << "Peremeter of the rectangel=" << p;
    return 0;
}