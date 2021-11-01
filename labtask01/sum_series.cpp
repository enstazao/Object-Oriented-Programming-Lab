#include <iostream>
using namespace std;
void Series_Sum(int range);

int main()
{
    int range = 0;
    cout << "Enter How many terms sum you want = ";
    cin >> range;
    Series_Sum(range);
    return 0;
}

void Series_Sum(int range)
{
    double sum1 = 0, totalSum = 0;
    int fac = 1;
    for (int i = 1; i <= range; i++)
    {
        fac *= i;
        sum1 = fac/i;
        totalSum += sum1; 
    }
    cout << "Sum of the series up to = " << range  << ",And their sum = " << totalSum << endl;
}
