#include <iostream>
using namespace std;

int main()
{
    int firstLoop = 4, c_innerLoop = 1;
    int z = 1;
    for (; z <= firstLoop; z++)
    {
        if (z < firstLoop)
        {
            cout << " ";
            continue;
        }
        for (int j = 1; j <= c_innerLoop; j++)
        {
            cout << "*";
            if (c_innerLoop == 9)
            {
                break;
            }
        }
        z = 0;
        firstLoop -= 1;
        c_innerLoop += 2;
        cout << endl;
    }
    int outerLoop = 2, innerLoop = 5;
    int i = 1;
    for (; i <= 5; i++)
    {
        if (i < outerLoop)
        {
            cout << " ";
            continue;
        }
        if (i <= outerLoop)
        {
            for (int j = 1; j <= innerLoop; j++)
            {
                cout << "*";
                if (innerLoop == 1)
                {
                    break;
                }
            }
            i = 0;
            innerLoop -= 2;
            outerLoop += 1;
            cout << endl;
        }
    }
    return 0;
}