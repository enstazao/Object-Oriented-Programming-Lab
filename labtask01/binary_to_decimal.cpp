#include <iostream>
#include <cmath>
using namespace std;

int Decimal_Convertor(int number);

int main()
{
    int number = 0;
    cout << "Enter the Binary Number = ";
    cin >> number;
    int result  = Decimal_Convertor(number);
    cout << "The Binary Number You Enter = " << number << ", It's Decimal Value = " << result << endl;
    return 0;
}

int Decimal_Convertor(int number)
{
    int  revNumber = 0, counter = 1, decimalNumber = 0;
    int copyNumber = number;
    int sum = 0, decimal_number = 0, d_counter = 0;
    while (number > 0)
    {
        revNumber = number % 10;
        if (number = number / 10)
                counter += 1;
    }
    while (copyNumber > 0)
    {
        decimalNumber = copyNumber % 10;
        copyNumber = copyNumber / 10;
        if (d_counter < counter)
        {
            sum = decimalNumber * (pow(2, d_counter));
            decimal_number += sum;
        }
        d_counter += 1;
    }
    return decimal_number;
}