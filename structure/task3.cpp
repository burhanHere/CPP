#include <iostream>
#include <string>
using namespace std;
typedef struct studentData
{
    string name;
    int rollNo;
    float marksChemistry = 0, marksPhysics = 0, marksMaths = 0;
} sD;

int main()
{
    sD user[5];
    cout << "Enter Data Of the student: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << " : " << endl;
        while (true)
        {
            cout << "Name : ";
            cin >> user[i].name;
            bool numberFound;
            for (int j = 0; user[i].name[j] != '\0'; j++)
            {

                if ((user[i].name[j] >= 'a' && user[i].name[j] <= 'z') || (user[i].name[j] >= 'A' && user[i].name[j] <= 'Z'))
                {
                    numberFound = false;
                    continue;
                }
                else
                {
                    numberFound = true;
                    break;
                }
            }
            if (numberFound == true)
            {
                cout << "!!!!!!!Invalid Input!!!!!!!\nName should contain only Alphabets.\n";
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
            cin >> user[i].rollNo;

            if (user[i].rollNo >= 100000 && user[i].rollNo >= 999999)
            {
                cout << "Enter a 6- digit roll no!" << endl;
                continue;
            }
            else
            {
                break;
            }
        }
        cout << "Enter marks in different subjects (out of 100) of the student : " << endl;
        while (true)
        {
            cout << "Chemistry : ";
            cin >> user[i].marksChemistry;
            if (user[i].marksChemistry >= 0 && user[i].marksChemistry <= 100)
            {
                break;
            }
            cout << "!!!!!!!Invalid Input!!!!!!!" << endl;
        }
        while (true)
        {
            cout << "Maths : ";
            cin >> user[i].marksMaths;
            if (user[i].marksMaths >= 0 && user[i].marksMaths <= 100)
            {
                break;
            }
            cout << "!!!!!!!Invalid Input!!!!!!!" << endl;
        }
        while (true)
        {
            cout << "Physics : ";
            cin >> user[i].marksPhysics;
            if (user[i].marksPhysics >= 0 && user[i].marksPhysics <= 100)
            {
                break;
            }
            cout << "!!!!!!!Invalid Input!!!!!!!" << endl;
        }
    }
    cout << " _________________________________________" << endl;
    cout << "|_________________________________________|" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Date of student " << i + 1 << " : " << endl;
        cout << "Name : " << user[i].name << endl;
        cout << "Roll No : " << user[i].rollNo << endl;
        cout << "Marks : " << endl;
        cout << "_______" << endl;
        cout << "Chemistry : " << user[i].marksChemistry << endl;
        cout << "Maths : " << user[i].marksMaths << endl;
        cout << "Physics : " << user[i].marksPhysics << endl;
        float total = user[i].marksChemistry + user[i].marksPhysics + user[i].marksMaths;
        cout << "Total Marks : " << total << endl;
        float percentage = total / 300 * 100;
        cout << "Percentage : " << percentage << endl;
        cout << "______________________________________" << endl;
    }

    return 0;
}