#include <iostream>
using namespace std;

void Perfect_Numbers(int number);

int main()
{
    int number = 0;
    cout << "Enter the range to what you want the perfect Number = ";
    cin >> number;
    Perfect_Numbers(number);
    return 0;
}

void Perfect_Numbers(int number)
{
    int checker = 0;
    for (int i = 1; i <= number; i++)
    {
        checker = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                checker += j;
            }
        }
        if (checker == i)
        {
            cout << "The Number = "  << i << ", is a perfect Number" << endl;
        }
        else
        {
            cout << "The Number = " << i << ", is not a perfect Number" << endl;
        }
    }
}