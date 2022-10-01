#include <iostream>
#include <string>
using namespace std;
typedef struct studentData
{
    string name;
    int rollNo;
    int age;
} sD;
int main()
{
    sD studentDataInput[5];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter data of student " << i + 1 << endl;
        cout << "________________________" << endl;
        bool isFound;
        while (true)
        {
            cout << "Name : ";
            cin >> studentDataInput[i].name;
            for (int j = 0; studentDataInput[i].name[j] != '\0'; j++)
            {
                isFound = false;
                if (!isalpha(studentDataInput[i].name[j]))
                {
                    isFound = true;
                    break;
                }
                else
                {

                    continue;
                }
            }
            if (isFound == true)
            {
                cout << "Enter data of student " << i + 1 << endl;
                cout << "________________________" << endl;
                cout << "!!!!!!!Invalid Input!!!!!!!\nName can inly contain Alphabets:\n";
                continue;
            }
            else
            {
                break;
            }
        }
        while (true)
        {
            cout << "Roll No (6-Digits): ";
            cin >> studentDataInput[i].rollNo;
            if (studentDataInput[i].rollNo >= 100000 && studentDataInput[i].rollNo <= 999999)
            {
                break;
            }
            else
            {
                cout << "!!!!!!!Invalid Input!!!!!!!\nRoll No should contain only 6-digits:\n";
            }
        }
        cout << "Age : ";
        cin >> studentDataInput[i].age;
    }
    cout << "+++++++++++++++++++++++++++++++++++" << endl
         << "+++++++++++++++++++++++++++++++++++" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Date of student " << i + 1 << " :" << endl;
        cout << "___________________" << endl;
        cout << "Name: " << studentDataInput[i].name << endl;
        cout << "Roll No: " << studentDataInput[i].rollNo << endl;
        cout << "Age: " << studentDataInput[i].age << endl;
    }
    system("pause");
    return 0;
}