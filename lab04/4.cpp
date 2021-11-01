#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cars[5];
    cars[0] = "Volvo";
    cars[1] = "BMW";
    cars[2] = "Ford";
    cars[3] = "Mazda";
    cars[4] = "Tesla";
    for(int j = 0; j < 5; j++)
        cout << cars[j] << endl;
    return 0;
}