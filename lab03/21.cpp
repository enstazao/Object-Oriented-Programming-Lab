#include <iostream>
#include <string>
using namespace std;

void Reverse_Array(string *s, int len);


int main()
{
    string s;
    cout << "Enter ant string :";
    cin >> s;
    int len = s.length();
    Reverse_Array(&s, len);
    return 0;
}

void Reverse_Array(string *s, int len)
{
    string a = *s;
    for (int i = -len; i <= 0; i++)
    {
        cout << a[abs(i)] << endl;
    }
}