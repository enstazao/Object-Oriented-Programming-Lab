#include <iostream>
using namespace std;
int Greater_Number(int *n1,int *n2);

int main()
{
    int numberOne = 0; 
    int numberTwo = 0;
    cout << "Enter the Number one = ";
    cin >> numberOne;
    cout << "Enter the Number Two = ";
    cin >> numberTwo;
    int *p = &numberOne;
    int *p2 = &numberTwo;
    cout << "The Greater Number is = " <<  Greater_Number(p, p2) << endl;
    return 0;
}

int Greater_Number(int *n1, int *n2)
{
    if (*n1 > *n2)
        return *n1;
    else
        return *n2;
}