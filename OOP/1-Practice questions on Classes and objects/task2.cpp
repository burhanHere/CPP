#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rollNo;
    char phoneNo[12] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};
    string address;
};
void studentDetailsInput(string &name, int &rollNo, char phoneNo[], string &address);
void studentDetailsOutput(string &name, int &rollNo, char phoneNo[], string &address);
int main()
{
    int numberOfStudents;
    cout << "Enter the number of students of which you are going to enter data of:";
    while (true)
    {
        cin >> numberOfStudents;
        if (numberOfStudents > 0)
        {
            break;
        }
        cout << "Invalid Input!!!" << endl;
        cout << "Try again: ";
    }

    student *st = new student[numberOfStudents];
    cout << "__________________________________" << endl;
    cout << "_______________InPut______________" << endl;
    cout << "__________________________________" << endl;
    for (int i = 0; i < numberOfStudents; i++)
    {
        studentDetailsInput(st[i].name, st[i].rollNo, st[i].phoneNo, st[i].address);
    }
    cout << "__________________________________" << endl;
    cout << "______________OutPut______________" << endl;
    cout << "__________________________________" << endl;
    for (int i = 0; i < numberOfStudents; i++)
    {
        studentDetailsOutput(st[i].name, st[i].rollNo, st[i].phoneNo, st[i].address);
    }
    delete[] st;
    return 0;
}
void studentDetailsInput(string &name, int &rollNo, char phoneNo[], string &address)
{
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter roll-no: ";
    cin >> rollNo;
    cout << "Enter phone-no: ";
    cin >> phoneNo;
    cout << "Enter Address: ";
    cin >> address;
}
void studentDetailsOutput(string &name, int &rollNo, char phoneNo[], string &address)
{
    cout << "Name:\t\t" << name << endl;
    cout << "Roll-NO:\t" << rollNo << endl;
    cout << "Phone-No:\t" << phoneNo << endl;
    cout << "Address:\t" << address << endl;
}