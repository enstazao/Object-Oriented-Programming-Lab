#include <iostream>
using namespace std;

class Sum   // Class Name
{
    public:  // Access Specifier  ---- Public
    Sum(int l, int m, int n);  // Parameterized Constructor 3 Parameters

    Sum(int l, int m);   // Parametrized Constructor 2 Parameters
};

Sum::Sum(int l, int m, int n)  // Parameterized Constructor 3 Parameters
    {

        cout << "Sum of the Three Integers:   "  << (l + m + n) << endl;
    }

Sum::Sum(int l, int m)   // Parametrized Constructor 2 Parameters
    {
        cout << "Sum of the Two INtegers:   " << l + m << endl;

    }

int main()
{
    Sum s1 = Sum(3, 4, 5);
    Sum s2 = Sum(2, 4);
    return 0;
}


/*CODE OUTPUT
Sum of the Three Integers:   12
Sum of the Two INtegers:   6

*/