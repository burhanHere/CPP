#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char fname[50];
    char sname[50];
    int YoB;
    cout << "Kindy enter your Forename." << endl;
    cin >> fname;
    cout << "Kindy enter your Surname." << endl;
    cin >> sname;
    cout << "Kindy enter your year of birth." << endl;
    cin >> YoB;
    //Either use this
    cout << fname << "\t" << sname << "\t" << YoB;
    //Or this
    printf("%s %s %d", fname, sname, YoB);
    return 0;
} //video 8 to watch