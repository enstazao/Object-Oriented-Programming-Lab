#include <iostream>
using namespace std;

int main()
{
    int fiqure = 0;
    cout << "Enter the Number of rows : ";
    cin >> fiqure;
    for (int i = 1; i <= fiqure; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}