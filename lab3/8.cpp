#include <iostream>
using namespace std;

int main()
{
    int number = 1, sum = 0;
    do{
        sum = sum + number;
        number++;
    }while(number <= 100);
    cout << "The sum of first 100 number is = " << sum << endl;
    return 0;   
}