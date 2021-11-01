#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int i;
    cout << "\nRead and Print elements of an Array:\n";
    cout << "----------------------------------------" << endl;
    cout << "Input 10 elements in an array: "  << endl;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter Element : " << i + 1 << " ";
        cin >> arr[i]; 
    }
    cout << "Elements in array are " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << " " << arr[i] << endl;
    }
    return 0;
}