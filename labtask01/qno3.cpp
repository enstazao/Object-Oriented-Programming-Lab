#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    cout << "Enter the cube range = ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        cout << "Number is = "<< i << "And it's cube is = "<< i * i * i << endl;
    }
    return 0;
}