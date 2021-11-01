#include <iostream>
using namespace std;
void Ascending_Array(int arr[],int arraySize);
void Display_Array(int arr[], int arraySize);

int main()
{
    int arr[] = {8, 5, 1, 2, 3, 7, 10};  // Ascending Smallest to greatest
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    Display_Array(arr, arraySize);
    Ascending_Array(arr, arraySize);
    return 0;
}
void Display_Array(int arr[], int arraySize)
{
    cout << "The Given Array is  ----->";
    cout << "   {";
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
}

void Ascending_Array(int arr[], int arraySize)
{
    int check = 0, index = 0, indexx = 0;
    for (int i = 0; i < arraySize; i++)
    {
        int smallestNumber = arr[i];
        for (int j = i; j < arraySize; j++)
        {
            if (smallestNumber >= arr[j])
            {
                smallestNumber = arr[j];
                check = j;
            }
        }
        indexx = arr[index];
        arr[index] = smallestNumber;
        arr[check] = indexx;
        check = 0;
        index += 1;
    }
    cout << "The array is Ascending order  ---->";
    cout << "   {";
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
}