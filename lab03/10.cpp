#include <iostream>
using namespace std;
void Second_Smallest(int arr[], int arraySize);
void Display_Array(int arr[], int arraySize);

int main()
{
    int arr[] = {10, 5, 2, 4, 0, 3, 7, 1};
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    Display_Array(arr, arraySize);
    Second_Smallest(arr, arraySize);
    return 0;
}

void Display_Array(int arr[],int arraySize)
{
    cout << "The Given Arrays is ------>";
    cout << "   {";
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
}

void Second_Smallest(int arr[], int arraySize)
{
    int smallestNumber = 0, check = 0, index = 0;
    for (int i = 0; i < 2; i++)
    {
        smallestNumber = arr[i];
        for (int j = i; j < arraySize; j++)
        {
            if (smallestNumber >= arr[j])
            {
                smallestNumber = arr[j];
                check = j;
            }
        }
        index = arr[0];
        arr[0] = smallestNumber;
        arr[check] = index;
    }
    cout << "The Second Smallest Number = " << smallestNumber << endl;
}