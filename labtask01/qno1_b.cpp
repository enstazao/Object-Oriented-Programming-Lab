#include <iostream>
using namespace std;

int main()
{
    int innerLoop = 1, outerLoop = 0, i = 1;
    cout << "Enter the Number of Rows you want = ";
    cin >> outerLoop;
    for (; i <= outerLoop; i++)
    {
        if (i < outerLoop)
        {
            cout << " ";
            continue;
        }
        for (int j = 1; j <= innerLoop; j++)
        {
            cout << "*";
        }
        i = 0;
        innerLoop += 1;
        outerLoop -= 1;
        cout << endl;
    }
    return 0;
}