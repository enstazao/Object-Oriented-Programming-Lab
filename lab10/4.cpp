#include <iostream>
using namespace std;


class Max
{
    private: 
        int numOne;
        int numTwo;
        int numThree;
    public:
        Max(int num1,int num2)
        {
            if (num1 > num2)
                cout << "The Greater Number is: " << num1 << endl;
            else
                cout << "The Greater Number is: " << num2 << endl;
        }

        Max(int num1, int num2, int num3)
        {
            if (num1 > num2 && num1 > num3)
            {
                cout << "The Greater Number is: " << num1 << endl;
            }
            else if (num2 > num1 && num2 > num3)
            {
                cout << "The Greater Number is: " << num2 << endl;
            }

            else
            {
                cout << "The Greater Number is: " << num3 << endl;
            }
        }
};

int main()
{
    for (int i = 2; i < 8; i++)
    {
        Max m(i, 4);
        Max m2(i, 4, 6);
    }
    return 0;
}

/* CODE OUTPUT

The Greater Number is: 4
The Greater Number is: 6
The Greater Number is: 4
The Greater Number is: 6
The Greater Number is: 4
The Greater Number is: 6
The Greater Number is: 5
The Greater Number is: 6
The Greater Number is: 6
The Greater Number is: 6
The Greater Number is: 7
The Greater Number is: 7
*/