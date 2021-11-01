#include <iostream>
using namespace std;

int main()
{
    int number = 1, sum = 0, range = 0;
    cout << "Enter the Range : ";
    cin  >> range;
    while (number <= range)
    {
        if (number % 2 != 0)
        {
            sum += number;
        }
        number++;
    }
    cout << "The Sum of odd number from 0 to " << range << "is = " << sum << endl;
    return 0;

}