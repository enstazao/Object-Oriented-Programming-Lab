#include <iostream>
using namespace std;

int main()
{
    int n, i, a[100];
    cout << "\n\nRead n number of values from an arrray and display in reverse order" << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "Input the number of elements to store an array : ";
    cin >> n;
    cout << "Input " << n << "  number of elements in the array : \n";
    for (i = 0; i < n; i++)
    {
        cout << "Enter element  : " << i + 1 << " ";
        cin >> a[i];
    }
    cout << "\nThe values store into an array are : \n";

    for (i = 0; i<n; i++)
        cout << " " << a[i];

    cout << "\n\nThe values stored into an array in reverse order" << endl;
    for (i = n; i >= 0; i--)
    {
        cout << " " << a[i];
    }
    return 0;
}