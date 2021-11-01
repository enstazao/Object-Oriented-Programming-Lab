#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a Character: ";
    cin.get(ch);
    cout << "The Character You Enter:   " << ch << endl;
    cin.get(ch);
    cout << "Printing Second Time:  " << ch << endl;

    cin.putback(ch);
    cin.get(ch);
    cout << "After Put Back:    " << ch << endl;
    ch = cin.peek();

    cout << "cin.peek() After Using:    " << ch << endl;
    return 0;
}