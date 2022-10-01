#include <iostream>
#include <string>
using namespace std;
typedef struct studentData
{
    string name;
    int rollNo;
    int age;
    string address;
} sD;
sD user[4];
int printNamesOfStudentsOfAge14();
int printNamesOfStudentsHavingEvenRollNo();
int printDetailsOfStudentsWhozRollIsEntered();
int rollNoForDetails;
int main()
{
    cout << "Enter student Data:" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "__________" << endl;
        while (true)
        {
            cout << "Roll No(6-Digits): ";
            cin >> user[i].rollNo;
            if (user[i].rollNo >= 100000 && user[i].rollNo <= 999999)
            {
                break;
            }
            cout << "!!!!!!!Invalid Input!!!!!!!" << endl;
        }

        while (true)
        {
            bool isFound;
            cout << "Name: ";
            cin >> user[i].name;
            for (int j = 0; user[i].name[j] != '\0'; j++)
            {
                if ((user[i].name[j] >= 'a' && user[i].name[j] >= 'z') || (user[i].name[j] >= 'A' && user[i].name[j] >= 'Z'))
                {
                    isFound = false;
                }
                else
                {
                    isFound = true;
                    break;
                }
            }
            if (isFound)
            {
                cout << "!!!!!!!Invalid Input!!!!!!!\nName can inly contain Alphabets:\n";
                continue;
            }
            else
            {
                break;
            }
        }
        cout << "Age: ";
        cin >> user[i].age;
        cout << "Address: ";
        cin >> user[i].address;
    }
    cout << "Names if the students of age 14." << endl;
    printNamesOfStudentsOfAge14();
    cout << "Name of the students who's roll numbers are even:" << endl;
    printNamesOfStudentsHavingEvenRollNo();
    cout << "Enter the Roll No of the student to see his details:" << endl;
enterDetailsAgain:
    while (true)
    {
        cout << "Roll No(6-Digits): ";
        cin >> rollNoForDetails;
        if (rollNoForDetails >= 100000 && rollNoForDetails <= 999999)
        {
            break;
        }
        cout << "!!!!!!!!Invalid Input!!!!!!!!" << endl;
    }
    int printDetailsOfStudentsWhozRollIsEntered();
    cout << "Do you want see details of other students:" << endl;
    char yesNo;
    cout << "Enter y==> Yes\t\tEnter any other key==>No" << endl;
    cin >> yesNo;
    if (yesNo == 'y')
    {
        goto enterDetailsAgain;
    }
    return 0;
}
int printNamesOfStudentsOfAge14()
{
    for (int i = 0; i < 4; i++)
    {

        if (user[i].age == 14)
        {
            cout << user[i].name << endl;
        }
    }
    return 0;
}
int printNamesOfStudentsHavingEvenRollNo()
{
    for (int i = 0; i < 4; i++)
    {
        if (user[i].rollNo % 2 == 0)
        {
            cout << user[i].name << endl;
        }
    }
    return 0;
}
int printDetailsOfStudentsWhozRollIsEntered()
{
    while (true)
    {
        int i = 0;
        if (user[i].rollNo == rollNoForDetails)
        {
            cout << "Name: " << user[i].name << endl;
            cout << "Address: " << user[i].address << endl;
            break;
        }
    }
    return 0;
}