#include <iostream>
#include <cmath>
using namespace std;

void Arm_Strong(int number);

int main()
{
    int number = 0;
    cout << "Enter any Number = ";
    cin >> number;
    Arm_Strong(number);
    return 0;
}

void Arm_Strong(int number)
{
    int cubeSaver = 0, cubeCalculate = 0, eachNumber = 0, numberCopy = 0, counter = 0;

    numberCopy = number;
    while (number > 0)
    {
        number = number / 10;
        counter++;
    }
    number = numberCopy;
    while (number > 0)
    {
        eachNumber = number % 10;
        cubeCalculate = pow(eachNumber, counter);
        number = number / 10;
        cubeSaver += cubeCalculate;
        cubeCalculate = 0;
    }
    if (cubeSaver == numberCopy)
        cout << "The given Number:" << numberCopy << ", is a Arm Strong Number" << endl;
    else
        cout << "The given Number:" << numberCopy << ", is not a Arm Strong Number" << endl;
}