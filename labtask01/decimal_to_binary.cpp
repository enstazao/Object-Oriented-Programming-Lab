#include <iostream>
using namespace std;

int main()
{
    int number = 0, copyNumber = 57;
    cout << "Enter Any Number = ";
    cin >> copyNumber;
    while (copyNumber > 1)
    {
        int binary = copyNumber % 2;
        copyNumber = copyNumber / 2;
        cout << binary;
    }
    cout << copyNumber;
    cout << endl;
    return 0;
}
