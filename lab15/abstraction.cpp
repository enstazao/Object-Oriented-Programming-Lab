#include <iostream>
using namespace std;

class Calculations   // Parent Class
{
    private:
        int x;
        int y;
    public:
        int Sum(int x, int y)  // Method
        {
            return x + y;
        }
};

int main()
{
    Calculations obj;  // Instance
    cout << "Sum = " << obj.Sum(3, 4) << endl;
    return 0;
}