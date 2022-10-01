#include <iostream>
using namespace std;
class employee
{
private:
    long int salary = 0;
    int workHours = 0;

public:
    void addSalary(long int &dataS)
    {
        if (salary < 500)
        {
            salary = salary + 10;
        }
    }
    void addWork(int dataW, long int &dataS)
    {
        if (dataW > 6)
        {
            dataS = dataS + 5;
        }
    }
    void setInfo(long int salaryInput, int workHourInput)
    {
        salary = salaryInput;
        workHours = workHourInput;
        addSalary(salary);
        addWork(workHours, salary);
    }
    void getInfo(void)
    {
        cout << "Fianl salary: $" << salary << endl;
    }
};
int main()
{
    employee ep;
    long int salary = 0;
    int workHours = 0;
    cout << "Enter the salary: ";
    cin >> salary;
    cout << "Enter the working hour count: ";
    cin >> workHours;
    ep.setInfo(salary, workHours);
    ep.getInfo();
    return 0;
}