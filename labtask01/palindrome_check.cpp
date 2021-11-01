#include <iostream>
using namespace std;

int main()
{
    int number = 0, storeNumber = 0, reverse = 0;
    cout << "Enter any Number = ";
    cin >> number;
    int copyNumber = number;
    while (number > 0)
    {
        storeNumber = number % 10;
        number = number / 10;
        reverse = reverse * 10 + storeNumber;
    }
    if (copyNumber == reverse)
        cout << "The given number = " << copyNumber << ", is a palindrome" << endl;
    else
        cout << "The given Number = " << copyNumber << ", is not a palindrome" << endl;
    return 0;
}