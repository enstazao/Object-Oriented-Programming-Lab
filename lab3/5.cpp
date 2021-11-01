#include <iostream>
using namespace std;

int main()
{
    int number = 1, sum = 0;
    while (number <= 100)
    {
        if (number  % 2 == 0)
        {
            sum += number;
        }
        number++;
    }
    cout << "The sum of first 100 even Numbers is = " << sum << endl;
    return 0;
}
