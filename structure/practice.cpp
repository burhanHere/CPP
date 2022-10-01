#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    struct student
    {
        string firstName = "Muhammad";
        string lastName = "Burhan";
        char grade[3] = {'A', '+', '\0'};
        int testScore = 100;
        int programmingScore = 100;
        float gpa = 4.0;
    };
    student data;
    cout << "Data:" << endl;
    cout << data.firstName << ' ' << data.lastName << endl;
    cout << data.grade << endl;
    cout << data.testScore << endl;
    cout << data.programmingScore << endl;
    cout << data.gpa << endl;
    struct student1
    {
        string firstName;
        string lastName;
        char grade[3];
        int testScore;
        int programmingScore;
        float gpa;
    };
    student1 data1;
    data1.firstName = data.firstName;
    data1.lastName = data.lastName;
    data1.testScore = data.testScore;
    data1.programmingScore = data.programmingScore;
    strcpy(data1.grade, data.grade);
    data1.gpa = data.gpa;
    cout << "Data1:" << endl;
    cout << data1.firstName << ' ' << data1.lastName << endl;
    cout << data1.grade << endl;
    cout << data1.testScore << endl;
    cout << data1.programmingScore << endl;
    cout << data1.gpa << endl;
    cout << "_______________________________" << endl;
    struct functionInStruct
    {
        int sum(int a, int b)
        {
            return a + b;
        }
    };
    functionInStruct FIS;
    int a = 1, b = 2;
    cout << FIS.sum(a, b);
    return 0;
}