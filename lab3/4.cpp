#include <iostream>
using namespace std;

int main()
{
    int sum = 0, number = 1;
    while (number <= 100)
    {
        sum += number;
        number++;
    }
    cout << "The sum of first 100 Numbers is = " << sum << endl;
    return 0;
}