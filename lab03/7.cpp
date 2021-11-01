#include <iostream>
using namespace std;
void Even_Odd(int arr[],int arraySize);
void Display_Array(int arr[], int arraySize);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    Display_Array(arr, arraySize);
    Even_Odd(arr, arraySize);
    return 0;
}

void Display_Array(int arr[], int arraySize)
{
    cout << "The Given Array is ----->";
    cout << "   {";
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
}

void Even_Odd(int arr[], int arraySize)
{
    int evenCounter = 0, oddCounter = 0;
    for (int i = 0; i < arraySize; i++)
    {
        if (arr[i] % 2 == 0)
            evenCounter += 1;
        else
            oddCounter += 1;
    }
    int evenArray[evenCounter];
    int oddArray[oddCounter];
    int e = 0, o = 0;
    for (int i = 0; i < arraySize; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArray[e] = arr[i];
            e += 1;
        }
        else
        {
            oddArray[o] = arr[i];
            o += 1;
        }
    }
    cout << "The Even Array is ----->";
    cout << "   {";
    for (int i = 0; i < evenCounter; i++)
    {
        cout << evenArray[i] << " ";
    }
    cout << "}" << endl;

    cout << "The Odd Array is ----->";
    cout << "   {";
    for (int i = 0; i < oddCounter; i++)
    {
        cout << oddArray[i] << " ";
    }
    cout << "}" << endl;
}