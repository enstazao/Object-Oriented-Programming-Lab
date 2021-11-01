#include <iostream>
using namespace std;

int main()
{
    int sum = 0, number = 1, range = 0;
    cout << "Enter the range:";
    cin >> range;
    do
    {
        if (number % 2 == 0)
        {
            sum += number;
        }
        number++;
    } while (number <= range);
    cout <<"The Sum of Even Numbers from 0 to  "<< range << "  is = " << sum << endl;
    return 0; 
}