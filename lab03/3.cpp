#include <iostream>
using namespace std;

void Unique_Elements(int arr[],int arraySize);

int main()
{
    int arr[] = {1, 2, 3, 4, 1, 5, 2};
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    Unique_Elements(arr, arraySize);
    return 0;
}

void Unique_Elements(int arr[],int arraySize)
{
    cout << "The Orignal Array is ---->   ";
    cout << "  {";
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<   "}" << endl;
    int counter = 0;
    cout << "The Unique Elements of the array are ---> ";
    cout << "   {";
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                    counter += 1;
            }
        }
        if (counter == 0)
            cout << arr[i] << "  ";
        counter = 0;
    }
    cout <<   "}" << endl;
}