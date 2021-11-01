#include <iostream>
#include <string>
using namespace std;
void String(string s, int *size, char arr[]);

int main()
{
    string s;
    cout << "Enter the String : ";
    cin >> s;
    int size = s.length();
    int *p = &size;
    char arr[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    String(s, p, arr);
    return 0;
}

void String(string s, int *size, char arr[])
{
    int v_c = 0, c_c = 0, c = 0;
    for (int i = 0; i < *size; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[i] != ' ')
            {
                if (s[i] == arr[j])
                    v_c += 1;
                else
                    c += 1;
            }
        }
        if (c == 10)
            c_c += 1;
        c = 0;
    }

    cout << "The Vowels in the string are = " << v_c << endl;
    cout << "The Consonent in the string are= " << c_c << endl;
}