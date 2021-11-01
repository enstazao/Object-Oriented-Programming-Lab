#include <iostream>
using namespace std;
void Factorial_Number(int *number);

int main()
{
    int number = 0;
    cout << "Enter the Number = ";
    cin >> number;
    int *p = &number;
    Factorial_Number(p);
    return 0;
}

void Factorial_Number(int *number)
{
    int factorial = 1;
    int *p2 = &factorial;
    for (int i = 1; i <= *number; i++)
    {
        *p2 *= i;
    }
    cout <<"The address of the result in memory is = " << p2 << "  and the factorial is  = " << factorial  << endl;
}