#include <iostream>
using namespace std;

void Check(char input);
int main()
{
    char input;
    cout << "Enter any character : ";
    cin >> input;
    Check(input);
    return 0;
}

void Check(char input)
{
    char s_arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char c_arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (s_arr[j] == input)
            {
                cout << "Its a small letter" << endl;
                break;
            }
            if (c_arr[j] == input)
            {
                cout << "It's a capital Letter" << endl;
            }
        }
    }
}