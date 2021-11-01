#include <iostream>
using namespace std;

void Check_Index(int arr[], int arraySize, int number);

int main()
{
    int number = 0;
    int arr[] = {1, 3, 4, 5, 6, 9};
    cout << "Enter the Index You want to search = ";
    cin >> number;
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    Check_Index(arr, arraySize, number);
    return 0;
}

void Check_Index(int arr[], int arraySize, int number)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (arr[i] == number)
        {
            cout << "The Index is = " << i << endl;
            break;
        }
    }
}