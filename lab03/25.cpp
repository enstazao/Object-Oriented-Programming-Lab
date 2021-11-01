#include <iostream>
using namespace std;

void Counter(string s,int size);
int main()
{
    string s;
    cout << "Enter the String : ";
    cin >> s;
    int size = s.length();
    Counter(s, size);
    return 0;
}

void Counter(string s, int size)
{
    int vowel = 0, consonent = 0, c_c = 0;
    char arr[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int sizeArray = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < sizeArray; j++)
        {
            if (s[i] == arr[j])
                vowel += 1;
            else 
                consonent += 1;
        } 
        if (consonent == 10)
            c_c += 1;
        consonent = 0;
    }
    cout << "The Vowels in the string are = "<< vowel << endl;
    cout << "The Consonent in the string are = " << c_c << endl;
    
}