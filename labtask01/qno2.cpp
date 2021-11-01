#include <iostream>
using namespace std;

int main()
{
    int range = 0;
    cout << "Enter Number of rows = ";
    cin >> range;
    for (int i = 1; i < range + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}