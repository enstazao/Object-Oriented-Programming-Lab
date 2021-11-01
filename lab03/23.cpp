#include <iostream>
using namespace std;
int Size_String(string s);

int main()
{
    char s[20];
    cout << "Enter the string :";
    cin >> s;
    int result = Size_String(s);
    cout << "The Given String has a Size = " << result << endl;
    return 0;
}

int Size_String(string s)
{
    int counter = 0, i = 0;
    while (s[i] != '\0')
    {
        i += 1;
        counter += 1;
    }
    return counter;
}