#include <iostream>
using namespace std;

int main()
{
    float payRate = 0; 
    int hoursWorked = 0;
    cout << "Enter Pay Rate:   ";
    cin >> payRate;
    cout << "Enter the Hours Worked:  ";
    cin >> hoursWorked;
    cout << "The PayRate = " << payRate << "\n";
    cout << "The Hours Worked = " << hoursWorked << "\n";

    cout << "Enter the pay Rate and Hours Worked:   ";
    cin >> payRate >> hoursWorked;
    cout << "The Pay Rate  = " << payRate << endl;
    cout << "The Hourse Worked = " << hoursWorked << endl;
    return 0;
}