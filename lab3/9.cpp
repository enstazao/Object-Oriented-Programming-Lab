#include <iostream>
using namespace std;

int main()
{
    int counter = 1;

    do
    {
        cout << "5 X" << counter << "= " << 5 * counter;
        cout << endl;
        counter++;
    }while(counter <= 10);
    return 0;

}