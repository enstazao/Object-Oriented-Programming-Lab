#include <iostream>
using namespace std;

int main()
{
    int resultMaker = 0, rows = 0;
    cout << "Enter the Number of rows = ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            resultMaker += 1;
            cout << resultMaker;
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}