#include <iostream>
using namespace std;

int main()
{
    int number = 0, range = 0;
    cout << "Enter the Number Which Table you want to calculate = ";
    cin >> number;
    cout << "Enter How Much Multiples you want = ";
    cin >> range;
    for (int i = 1; i <= range; i++)
    {
        cout << number << "X" << i << "=" << number * i << endl;
    }
    return 0;
}