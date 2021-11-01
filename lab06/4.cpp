#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    double firstNumber = 0, secondNumber = 0;
    string str;
    cout << "Power:    " << static_cast<int> (pow(2.5, 6.0)) << endl;

    firstNumber = 12.5;
    secondNumber = 3.0;
    cout << "Power NO 2:   " << firstNumber << "  Power of " << pow(firstNumber, secondNumber) << endl;

    cout << "The Square Root:  " << sqrt(24.0) << endl;

    firstNumber = pow(8.5, 2.5);

    cout << firstNumber << endl;

    str = "Programming in Cpp";
    cout << "The Length of the String is = " << str.length() << endl;
    return 0; 
}