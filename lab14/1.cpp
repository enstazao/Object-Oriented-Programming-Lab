#include <iostream>
using namespace std;

class Calcualtion{
    public:
        int Sum(int a, int b){
            return a + b;
        }

        int Sum(int a, int b, int c){
            return a + b + c;
        }

        int Sum(int a, int b, int c, int d){
            return a + b + c + d;
        }
};

int main()
{
    Calcualtion c;
    cout << c.Sum(4, 5)        << endl;
    cout << c.Sum(4, 5, 6)     << endl;
    cout << c.Sum(4, 5, 6, 7)  << endl;
    return 0;
}