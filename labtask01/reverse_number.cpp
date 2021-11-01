#include <iostream>
using namespace std;

int main()
{
    int number = 0, storeReverse = 0, userInput = 0, change_number = 0;
    cout << "Enter any Number = ";
    cin >> number;
    userInput = number;
    while (number > 0)
    {
        storeReverse = number % 10;
        number = number /10;
        change_number = change_number * 10 + storeReverse;
    }
    cout << "You Enter the Number = " << userInput << ", And your Number in reverse order = " << change_number << endl;
    return 0;
}