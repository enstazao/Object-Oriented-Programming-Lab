#include <iostream>
using namespace std;
int * Return_Pointer();

int main()
{
    int *ptr = Return_Pointer();
    cout << *ptr << endl;
    cout << "The address is = " << ptr << endl;
    return 0;
}

int * Return_Pointer()
{
    int n1 = 45;
    int *address = &n1;
    return address;
}