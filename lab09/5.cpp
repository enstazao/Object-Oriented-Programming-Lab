#include <iostream>
using namespace std;

class Sum_Calculator
{
    private:
        int numOne;
        int numTwo;
    public:
        void Set_Value(int numOne, int numTwo)
        {
            this->numOne = numOne;
            this->numTwo = numTwo;
        }

        int Display_Sum()
        {
            return numOne + numTwo;
        }
};

int main()
{
    int sum = 0;
    Sum_Calculator s;
    int numOne = 0, numTwo = 0;
    cout << "Enter the Number One:  ";
    cin >> numOne;
    cout << "Enter the Number Two:  ";
    cin >> numTwo;

    s.Set_Value(numOne, numTwo);
    sum = s.Display_Sum();

    cout << "The Sum is = " << sum << endl;

    return 0;
}

