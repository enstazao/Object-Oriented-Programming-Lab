#include <iostream>
using namespace std;

int add(int a, int b){
    return (a + b);
}
int main()
{
    int sum;
    sum = add(100, 70);
    cout << "100 + 70 = " << sum << endl;
    return 0;
}