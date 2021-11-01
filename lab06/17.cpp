#include <iostream>
using namespace std;

int main()
{
    int a = 23, b = 34;
    cout << "Enter Value: ";
    cin >> a >> b;
    cout << "a = " << a << " b = " << b << endl;
    cin.clear();
    cin.ignore(200, '\n');
    cout << "Enter Two Number Again:    ";
    cin >> a >> b;
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}