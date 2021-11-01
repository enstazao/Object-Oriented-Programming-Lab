#include <iostream>
using namespace std;

void Character_Check(string s, int l);

int main()
{
    string s;
    cout << "Enter any string : ";
    cin >> s;
    int l = s.length();
    Character_Check(s, l);
    return 0;
}

void Character_Check(string s, int l)
{
    int alphabets = 0, digits = 0, s_c = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122)
            alphabets += 1;
        if (s[i] >= 48 && s[i] <= 57)
            digits += 1;
        if ((s[i] >= 0 && s[i] <= 47) || (s[i] >= 58 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96) || (s[i] >= 123 && s[i] <= 127))
            s_c += 1; 
    }
    cout << "The Alphabets in the Given String are = " << alphabets << endl;
    cout << "The Digits in the Given String are = "  << digits << endl;
    cout << "The special characters in the Given string are = " << s_c << endl;
}