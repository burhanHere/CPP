#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float r;
    float pi = 3.14F;
    cout << "Enter the radious of the Sphere." << endl;
    cin >> r;
    float volume_of_sphere;
    volume_of_sphere = (r * r * r * pi * 4) / 3;
    cout << "Volume of the Sphere=\t" << volume_of_sphere;
    return 0;
}