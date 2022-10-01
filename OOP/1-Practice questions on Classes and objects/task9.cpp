#include <iostream>
#include <string>
using namespace std;
class employee
{
private:
    string name;
    string address;
    long joiningYear = 0;
    long salary = 0;

public:
    // data setters:
    void nameSetter()
    {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
    }
    void addressSetter()
    {
        cout << "Enter the address: ";
        getline(cin, address);
    }
    void joiningYearSetter()
    {
        cout << "Enter joining year: ";
        cin >> joiningYear;
    }
    void salarySetter()
    {
        cout << "Enter salary:";
        while (true)
        {
            cin >> salary;
            if (salary > 0 && salary < 10000000)
            {
                break;
            }
            cout << "Invalid Input!!!" << endl;
            cout << "Try Again: ";
        }
    }
    // data getters:
    void nameGetter()
    {
        cout << "Name: " << name << endl;
    }
    void addressGetter()
    {
        cout << "Address: " << address << endl;
    }
    void joiningYearGetter()
    {
        cout << "joining year: " << joiningYear << endl;
    }
    void salaryGetter()
    {
        cout << "Salary: " << salary << endl;
    }
};
void employeeDataInput(int numOfemployees, employee *ep)
{
    cout << "================================================================" << endl;
    cout << "=============================Input==============================" << endl;
    cout << "================================================================" << endl;
    for (int i = 0; i < numOfemployees; i++)
    {
        cout << "Data of employee No " << i + 1 << ":" << endl;
        cout << "======================" << endl;
        ep[i].nameSetter();
        ep[i].addressSetter();
        ep[i].joiningYearSetter();
        ep[i].salarySetter();
    }
}
void employeeDataoutput(int numOfemployees, employee *ep)
{
    cout << "================================================================" << endl;
    cout << "============================Output==============================" << endl;
    cout << "================================================================" << endl;
    for (int i = 0; i < numOfemployees; i++)
    {
        cout << "Data of employee No " << i + 1 << ":" << endl;
        cout << "======================" << endl;
        ep[i].nameGetter();
        ep[i].addressGetter();
        ep[i].joiningYearGetter();
        ep[i].salaryGetter();
    }
}
int main()
{
    cout << "Enter the how many employees data you want to enter: ";
    int numOfemployees;
    while (true)
    {
        cin >> numOfemployees;
        if (numOfemployees > 0)
        {
            break;
        }
        cout << "Invalid Input!!!" << endl;
        cout << "Try Again: ";
    }
 
    employee *employees;
    employees = new employee[numOfemployees];
    employeeDataInput(numOfemployees, employees);
    employeeDataoutput(numOfemployees, employees);
    delete[] employees;
    return 0;
}