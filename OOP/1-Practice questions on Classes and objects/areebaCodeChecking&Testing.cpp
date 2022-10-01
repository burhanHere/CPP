#include <iostream>
using namespace std;
class student
{
private:
    char address[50];
    int phone_number;
    char roll_number[50];

public:
    void datagetter(char name[]);
    void printing(char name[]);
};
void student::datagetter(char name[])
{
    cout << " enter address: ";
    cin.getline(address, 50);
    cout << " enter phone number: ";
    cin >> phone_number;
    cout << " enter roll number: ";
    cin.getline(roll_number, 50);
}
void student::printing(char name[])
{
    cout << "address of " << name << " is: " << address << endl;
    cout << " phone number is " << phone_number << endl;
    cout << " roll number is " << roll_number << endl;
}
int main()
{
    student s1;

    char name[20];
    cout << " enter name: ";
    cin.getline(name, 20);
    s1.datagetter(name);
    s1.printing(name);
    return 0;
}