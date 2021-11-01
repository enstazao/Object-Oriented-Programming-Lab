#include <iostream>
using namespace std;

void Perfect_Number(long number);

int main()
{
    long number = 0;
    cout << "Enter Any Number that you want to check for perfect Integer = ";
    cin >> number;
    Perfect_Number(number);
    return 0;
}

void Perfect_Number(long number)
{
    int checker = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            checker += i;
    }
    if (checker == number)
        cout << "The Number you entered = " << number << ", is a perfect integer" << endl;
    else 
        cout << "The Number you entered = " << number << ", is not a perfect Number" << endl;
}