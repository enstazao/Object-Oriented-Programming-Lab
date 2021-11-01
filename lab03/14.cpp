#include <iostream>
using namespace std;
int SUM(int *n1,int *n2);

int main()
{
    int numberOne = 0;
    int numberTwo = 0;
    cout << "Enter the Number ONe = ";
    cin >> numberOne;
    cout << "Enter the Number Two = ";
    cin >> numberTwo;
    int *n1 = &numberOne;
    int *n2 = &numberTwo;
    int result = SUM(n1, n2);
    cout << result << endl;
}

int SUM(int *n1, int *n2)
{
    return *n1 + *n2;
}
