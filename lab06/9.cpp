#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter Your Name:  ";
    getline(cin, str);
    cout << "Hello " << str << "!\n";
    return 0;
}