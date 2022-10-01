#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float Centigrade;
    float Fahrenheit;
    cout << "Enter your temprature in Centigrade." << endl;
    cin >> Centigrade;
    //use this
    Fahrenheit = ((Centigrade * 9) / 5) + 32;
    //or this
    Fahrenheit = (Centigrade * 9 / 5) + 32;
    cout << Fahrenheit;
    return 0;
}