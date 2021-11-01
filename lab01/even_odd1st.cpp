#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    cout << "Enter any Number:";
    cin >> number;
    if (number % 2 == 0)
        cout << "It's a Even Number" << endl;
    else 
        cout << "It's a Odd Number" << endl;
    return 0;
}