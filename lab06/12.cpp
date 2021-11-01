#include <iostream>
using namespace std;

int main()
{
    int items[4] = {10, 8, 12, 5};
    int cost[4] = {75, 100, 45, 6};

    cout.width(5);
    cout << "ITEMS";
    cout.width(8);
    cout << "COST";
    cout.width(15);
    cout << "TOTAL VALUES" << "\n";

    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cout.width(5);
        cout << items[i];

        cout.width(8);
        cout << cost[i];

        int value = items[i] + cost[i];
        cout.width(15);
        cout << value << "\n";
        sum += value;  
    }

    cout << "\n Total Sum = " << sum << endl;
    return 0;
}