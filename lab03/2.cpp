#include <iostream>
using namespace std;

void Duplicate_Items(int arr[],int arraySize);

int main()
{
    int arr[] = {1, 2, 2, 5, 5, 1};
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    Duplicate_Items(arr, arraySize);
    return 0;
}

void Duplicate_Items(int arr[],int arraySize)
{
    int counter = 0;
    int numberCounter = 0;
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = i + 1; j < arraySize; j++)
        {
            if (arr[i] == arr[j])
                counter += 1;
        }
        if (counter > 0)
        {
            numberCounter += 1;
        }
        counter = 0;
    }
    cout << "The Duplicate Items are = " << numberCounter << endl;
}