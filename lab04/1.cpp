#include <iostream>
using namespace std;

int main()
{
    int M[10], j;
    M[0] = 2;
    M[1] = 4;
    M[2] = 6;
    M[3] = 8;
    M[4] = 10;
    M[5] = 12;
    M[6] = 14;
    cout << "Print all the Number  :  \n";
    cout << "Forward Loop " << endl;
    for (j = 0; j < 7; j++)
    {
        cout << "M["<< j << "]" <<  "= " << M[j] << endl;
    }
    cout << "Forward Loop End" << endl;
    cout << "Reverse Loop" << endl;
    for (j = 6; j >= 0; j--)
    {
        cout << "M[" << j << "]" << "=" << M[j] << endl;
    }
    cout << "Reverse Loop End" << endl;
    return 0;
}