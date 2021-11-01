#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    cout << "Enter the number which fictorial you want to calculate = ";
    cin >> number;
    int sum = 1;
    for (int i = 1; i <= number; i++)
    {
        sum *= i;
    }
    cout << "Given Number = " << number << "  and it's fictorail is = "<< sum << endl;
    return 0;
}