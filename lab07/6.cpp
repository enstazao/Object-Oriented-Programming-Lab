#include <iostream>
using namespace std;

int main()
{
    int farhenheit = 0;
    int celsius = 0;
    cout << "Enter Farhenheit Temperature:  ";
    cin >> farhenheit;
    cout << endl;
    celsius = 5 / 9 * (farhenheit - 32);
    cout << "The Temperature in celcius is = " << celsius << endl;
    return 0;
}