#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    while (x < 25)
    {
        if (x % 2 == 0)
            cout << x << endl;
        x++;
    }
    return 0;
}