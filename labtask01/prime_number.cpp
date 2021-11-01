#include <iostream>
using namespace std;

void prime_number(int number);

int main()
{
    int number;
    cout << "Enter any Number = ";
    cin >> number;
    prime_number(number);
    return 0;
}

void prime_number(int number)
{
    int counter = 1;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            counter += 1;
    }
    if (counter == 1)
        cout << "It's a prime number" << endl;
    
    else
        cout << "It's not a prime number" << endl;
}