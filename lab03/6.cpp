#include <iostream>
using namespace std;
int Largest_Number(int arr[], int arraySize);
int Smallest_Number(int arr[], int arraySize);
void Display_Array(int arr[], int arraySize);

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 0};
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    cout << "The Given Array is  ----->     ";
    Display_Array(arr, arraySize);
    int largestNumber = Largest_Number(arr, arraySize);
    int smallestNumber = Smallest_Number(arr, arraySize);
    cout << "The Largest Number in the Array is = " << largestNumber << endl;
    cout << "The Smallest Number in the Array is = " << smallestNumber << endl;
    return 0;
}

void Display_Array(int arr[], int arraySize)
{
    cout << "{";
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
}

int Largest_Number(int arr[], int arraySize)
{
    int largestNumber = arr[0];
    for (int i = 0; i < arraySize; i++)
    {
        if (largestNumber < arr[i])
            largestNumber = arr[i];
    }
    return largestNumber;
}

int Smallest_Number(int arr[], int arraySize)
{
    int smallestNumber = arr[0];
    for (int i = 0; i < arraySize; i++)
    {
        if (smallestNumber > arr[i])
            smallestNumber = arr[i];
    }
    return smallestNumber;
}