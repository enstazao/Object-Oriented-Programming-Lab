#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int number = 0; number <= 100; number++)
    {
        if (number % 2 == 0)
        {
            sum += number;
        }

    }
    cout << "The Sum of first 100 Even Number = " << sum << endl;
    return 0;
}