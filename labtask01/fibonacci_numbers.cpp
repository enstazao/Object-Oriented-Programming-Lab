#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c = 0, number = 0;
    cout << "Input Number of terms you want = ";
    cin >> number;
    cout << a;
    for (int i = 0; i < number - 1; i++)
    {
        a = b;
        b = c; 
        c = a + b;
        cout << "\t" << c;
    }
    cout << endl;
    return 0;
}