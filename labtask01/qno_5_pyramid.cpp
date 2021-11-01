#include <iostream>
using namespace std;

int main()
{
    int innerLoop = 1, outerLoop = 0, result = 1;
    cout << "Enter the Number of row = ";
    cin >> outerLoop;
    int i = 1;
    for (; i <= outerLoop; i++)
    {
        if (i < outerLoop)
        {
            cout << " ";
            continue;
        }
        
        for (int j = 0; j < innerLoop; j++)
        {
            cout << result;
            cout << " ";
            result += 1;
        }
        i = 0;
        innerLoop += 1;
        outerLoop -= 1;
        cout << endl;
    }
    return 0;
}