#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int table[3][2] = {{10, 22}, {33, 44}, {45, 78}};
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 2; col++)
            cout << "\t" << table[row][col];
        cout << "\n";
    }
    return 0;
}