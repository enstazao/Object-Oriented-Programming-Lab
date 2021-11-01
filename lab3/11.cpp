#include <iostream>
using namespace std;

int main()
{
    int number = 0, sum = 0; 
    for (number = 1; number <= 100; number++)
    {
        sum += number;
    }
    cout << "The Sum of first 100 Numbers is = " << sum << endl;
    return 0;
}