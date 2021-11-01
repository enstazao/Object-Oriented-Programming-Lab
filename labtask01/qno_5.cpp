#include <iostream>
using namespace std;

int main()
{
    int resultMaker = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            resultMaker += 1;
            cout << resultMaker;
             cout << " ";
        }
        cout << endl;
    }
    return 0;
}