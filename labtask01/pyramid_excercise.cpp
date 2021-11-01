#include <iostream>
using namespace std;

int main()
{
    int firstLoop = 0, innerLoop = 1;
    cout << "Enter the Number of rows = ";
    cin >> firstLoop;
    int copyFirstLoop = firstLoop;
    int i = 1;
    for (; i <= firstLoop; i++)
    {
        if (i < firstLoop)
        {
            cout << " ";
            continue;
        }
        for(int j = 1; j <= innerLoop; j++)
        {
            cout << "*";
            if (innerLoop == (copyFirstLoop + copyFirstLoop + 1))
            {
                break;
            }
        }
        i = 0;
        firstLoop -= 1;
        innerLoop += 2;
        cout << endl;
    }
     return 0;}