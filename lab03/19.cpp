#include <iostream>
using namespace std;
void Ascending_Array(int arr[], int *arrayAddress);
void Display_Array(int arr[], int *arrayAddress);

int main()
{
    int arr[] = {2, 4, 20, 10, 15};
    int *array = arr;
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    int *arrayAddress = &arraySize;
    Display_Array(arr, arrayAddress);
    Ascending_Array(arr, arrayAddress);
    return 0;
}

void Display_Array(int arr[], int *arrayAddress)
{
    cout << "The Given Array is ------>";
    cout << "   {";
    for (int i = 0; i < *arrayAddress; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
}

void Ascending_Array(int arr[], int *arrayAddress)
{
    int check = 0, index = 0, indexx = 0;
    for (int i = 0; i < *arrayAddress; i++)
    {
        int smallestNumber = arr[i];
        for (int j = i; j < *arrayAddress; j++)
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
    for (int i = 0; i < *arrayAddress; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
}