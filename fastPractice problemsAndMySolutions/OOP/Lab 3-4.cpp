#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct section
{
    char sectionName = {'A'};
    string classTeacher;
    void inputSectionData(void)
    {
        cout << "Enter class teacher name: ";
        getline(cin, classTeacher);
    }
};
bool checkSimilar(string s);
bool checkSimilar(string s)
{
    ifstream read;
    string temp;
    bool same = true;
    read.open("studentData.txt");
    if (read.is_open())
    {
        while (!read.eof())
        {
            same = true;
            getline(read, temp);
            for (int i = 0; s[i] != '\0'; i++)
            {
                if (s[i] != temp[i])
                {

                    same = false;
                    break;
                }
            }
            if (same)
            {
                break;
            }
        }
        read.close();
    }
    else
    {
        cout << "File Not Open in checkSimilar()!!!";
    }
    return same;
}
struct student
{
    string name;
    string cnic;
    char gender = '\0';
    float cgpa = 0;
    student()
    {
        cout << "Enter the candidate's CNIC: ";
        cin.ignore();
        bool correctInput = true;
        while (true)
        {
            getline(cin, cnic);
            for (int i = 0; cnic[i] != '\0'; i++)
            {
                if (cnic[i] >= '0' && cnic[i] <= '9')
                {
                    correctInput = true;
                    continue;
                }
                else
                {
                    correctInput = false;
                    break;
                }
            }
            bool sameCNIC = checkSimilar(cnic);
            if (correctInput && !sameCNIC)
            {
                break;
            }
            if (sameCNIC)
            {
                cout << "Similar record already exists." << endl;
            }
            else
            {
                cout << "Invalid Input!!!" << endl;
            }
            cout << "Try Again: ";
        }
        cout << "Enter a candidate's Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter the Gender: ";
        while (true)
        {
            cin >> gender;
            if (gender == 'M' || gender == 'F' || gender == 'O' || gender == 'm' || gender == 'f' || gender == 'o')
            {
                break;
            }
            cout << "Invalid Input!!!" << endl;
            cout << "Try Again: ";
        }
        cout << "Enter you CGPA: ";
        while (true)
        {
            cin >> cgpa;
            if (cgpa > 0 && cgpa <= 4)
            {
                break;
            }
            cout << "Invalid Input!!!" << endl;
            cout << "Try Again: ";
        }
    }
};
void AddStudentData(student s);
int main()
{
    while (true)
    {
        int selectionInput;
        cout << "Enter 0 to exit program." << endl;
        cout << "Enter 1 to enter new data." << endl;
        cout << "Enter 2 to update existing data." << endl;
        while (true)
        {
            cin >> selectionInput;
            if (selectionInput >= 0 && selectionInput <= 2)
            {
                break;
            }
            cout << "Invalid Input!!!" << endl;
            cout << "Try Again: ";
        }
        if (selectionInput == 0)
        {
            break; // exit the program.
        }
        else if (selectionInput == 1)
        {
            system("CLS");
            AddStudentData(student());
        }
        else // selectionInput==2
        {
        }
    }
    return 0;
}
void AddStudentData(student s)
{
    ofstream write;
    write.open("studentData.txt", ios::app);
    if (write.is_open())
    {
        write << s.cnic << ',' << s.name << ',' << s.gender << ',' << s.cgpa << ',' << endl;
        write.close();
    }
    else
    {
        cout << "File Not Open!!!" << endl;
    }
}