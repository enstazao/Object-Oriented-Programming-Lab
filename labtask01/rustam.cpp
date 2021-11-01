#include <iostream>
#include <string>
using namespace std;
void Student_Add(int s)
{
    string ar[s];
    string names;
    for (int i = 0; i < s; i++)
    {
        cout << "Enter the Names of students you want to add : ";
        cin >> names;
        ar[i] = names;
    }
    cout << "Student Names You Enter" << endl;
    for (int i = 0; i < s;i++)
    {
        cout << ar[i] << endl;
    }
    char i;
    cout << "Do you want to update: y or Y";
    cin >> i;
    while (i == 'y' || i == 'Y')
    {
        int num;
        cout << "Enter number which name to update:";
        cin >> num;
        string s1;
        cout << "Enter New Name:";
        cin >> s1;
        ar[num - 1] = s1;
        cout << "Updated Student Names:" << endl;
        for (int i = 0; i < s; i++)
            cout << ar[i] << endl;
        break;
    }
    char i2;
    cout << "Do You Want to search for a student:y or Y or (N to close)";
    cin >> i2;
    while (i2 == 'y' || i2 == 'Y')
    {
        string s2;
        cout << "Enter the Name you want to search:";
        cin >> s2;
        for (int i = 0; i < s; i++)
        {
            if (ar[i] == s2)
            {
                cout << "The Given Name is in the array" << endl;
                break;
            }
        }
        break;
    }
}

int main()
{
    int s = 0;
    cout << "Enter How many Students you want to add:";
    cin >> s;
    Student_Add(s);
    return 0;
}