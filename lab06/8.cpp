#include <iostream>
using namespace std;

int main()
{
    char ch[100];
    cout << "Enter Your Name:  ";
    cin.getline(ch, 15);
    cout << "Hello " << ch << "!" << endl;
    return 0;
}