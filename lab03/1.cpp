#include <iostream>
using namespace std;

void Copy_Array(int arr[],int arraySize)
{
    int copyArray[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        copyArray[i] = arr[i];
    }

    cout << "The Array elments after Copied" << endl;
    cout << "{";
    for (int i = 0; i < arraySize; i++)
    {
        cout << copyArray[i] << "  ";
    }
    cout << "}" << endl;
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int arraySize = 0, countSize = 0;
    for (int i = 0; i < 6; i++)
    {
        countSize += sizeof(arr[i]);
    }
    arraySize = countSize / sizeof(arr[0]);
    Copy_Array(arr, arraySize);
    return 0;
}

