#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rollNo;
};
int main()
{
    student boy1;
    boy1.name = "Buhran";
    boy1.rollNo = 524987;
    cout << "My name is " << boy1.name << endl;
    cout << "My roll-no is " << boy1.rollNo << endl;
    return 0;
}