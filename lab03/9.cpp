#include <iostream>
using namespace std;
void Delete_Array(int arr[], int arraySize);
void Display_Array(int arr[], int arraySize);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    Display_Array(arr, arraySize);
    Delete_Array(arr, arraySize);
    return 0;
}

void Display_Array(int arr[], int arraySize)
{
    cout << "The Orignal Array is ----->";
    cout << "   {";
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
}

void Delete_Array(int arr[], int arraySize)
{
    int deleteIndex = 0;
    cout << "Enter the Index you want to delete = ";
    cin >> deleteIndex;
    int index = deleteIndex - 1;
    for (int i = (deleteIndex - 1); i < arraySize; i++)
    {
        arr[i] = arr[index + 1];
        index += 1;
    }
    cout << "The array After deleteing the index no " << deleteIndex << "------>";
    cout << "   {";
    for (int i = 0; i < (arraySize - 1); i++)
    {
        cout << arr[i] <<" " ;
    }
    cout << "}" << endl;
}