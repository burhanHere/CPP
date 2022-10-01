#include <iostream>
using namespace std;
typedef struct studentData
{
    char stName[50];
    int stRollNo;
    int stAge;
    char stRegistrationNo[50];
    int stTotMarks;
    float stMounthlyFee;
} sD;
sD st1;
int main()
{

    // st1.stName = "Burhan";
    // st1.stRollNo = 233175;
    // st1.stRegistrationNo = "l1f21bscs1059";
    // st1.stAge = 20;
    // st1.stTotMarks = 668;
    // st1.stMounthlyFee = 14, 166.67;
    cout << "Enter data of the student:" << endl;
    cout << "Name : ";
    cin >> st1.stName;
    cout << "Roll No : ";
    cin >> st1.stRollNo;
    cout << "Registration No : ";
    cin >> st1.stRegistrationNo;
    cout << "Age : ";
    cin >> st1.stAge;
    cout << "Total Marks Obtained : ";
    cin >> st1.stTotMarks;
    cout << "Mounthly Fee : ";
    cin >> st1.stMounthlyFee;
    cout << "___________________________________" << endl;
    cout << "Name : " << st1.stName << endl;
    cout << "Roll No : " << st1.stRollNo << endl;
    cout << "Registration No : " << st1.stRegistrationNo << endl;
    cout << "Age : " << st1.stAge << endl;
    cout << "Total Marks Obtained : " << st1.stTotMarks << endl;
    cout << "Mounthly Fee : " << st1.stMounthlyFee << endl;
    return 0;
}
