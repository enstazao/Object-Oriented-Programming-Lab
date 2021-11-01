#include <iostream>
using namespace std;

float square(float number);

int main()
{
    int x = 0;
    cout << "Enter the number:";
    cin >> x;
    cout << "Given Number = "  << x << " and it's square is = "<< square(x) << endl;
    return 0;
}

float square(float number)
{
    return number * number;
}