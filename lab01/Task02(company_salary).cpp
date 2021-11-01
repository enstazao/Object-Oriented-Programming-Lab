#include <iostream>
using namespace std;

int main()
{
    int employeeSalary = 0;
    float newSalary = 0.0;
    cout <<  "Enter the Employee Salary = ";
    cin >> employeeSalary;
    if (employeeSalary < 10000)
        newSalary = employeeSalary;
    else if (employeeSalary >= 10000 && employeeSalary < 20000)
        newSalary = employeeSalary - 1000;
    else if (employeeSalary >= 20000)
        newSalary = employeeSalary * 0.07;
    cout << "The Salary of the Employee is = " << newSalary << endl;
    return 0;
}