#include <iostream>
using namespace std;


class Prog
{
    public:
        Prog()
        {
            cout << "This is a Constructor Function that will call on object creation" << endl;
        }

        ~Prog()
        {
            cout << "This is a Destructor Function" << endl;
        }
};

int main()
{
    Prog x;
    int a, b;
    a = 10;
    b = 20;
    
    cout << "Sum of the Two Numbers :   " << a + b << endl;

    Prog obj1;
    Prog obj2;
    Prog obj3;
    return 0;
}

/* CODE OUTPUT

This is a Constructor Function that will call on object creation
Sum of the Two Numbers :   30
This is a Constructor Function that will call on object creation
This is a Constructor Function that will call on object creation
This is a Constructor Function that will call on object creation
This is a Destructor Function
This is a Destructor Function
This is a Destructor Function
This is a Destructor Function
*/