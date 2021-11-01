#include <iostream>
using namespace std;

int main()
{
    int age[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter User" << i + 1 << " Age = ";
        cin >> age[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "The User  " << i + 1 << "Has a age = " << age[i] << endl;
    }
    return 0;
}