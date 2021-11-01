#include <iostream>
using namespace std;

int main()
{
int employeeSalary = 0;
float newSalary = 0.0, deductAmount = 0.0;
cout << "Enter the Employee Salary = ";
cin >> employeeSalary;
if (employeeSalary < 10000)
{
    deductAmount = 0;
    newSalary = employeeSalary - deductAmount;
}
else if (employeeSalary >= 10000 && employeeSalary < 20000)
{
    deductAmount = 1000;
    newSalary = employeeSalary - deductAmount;
}
else if (employeeSalary >= 20000)
{
    deductAmount = employeeSalary * 0.07;
    newSalary = employeeSalary - deductAmount;
}
cout << "The Salary of the Employee is = " << newSalary << endl;
return 0;
}