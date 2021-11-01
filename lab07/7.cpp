#include <iostream>
using namespace std;

int main()
{
    int farhenheit = 0;
    int celsius = 0;
    cout << "Enter the Farhenheit: ";
    cin >> farhenheit;
    cout << endl;
    cout << "5/9" <<  ":    "  << 5/9 << "  f - 32" << farhenheit - 32 << endl;
    celsius = 5 / 9 * (farhenheit - 32);
    cout << "The Temperature in Celsius:    " << celsius << endl;
    return 0;
}