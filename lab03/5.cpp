#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3};
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    int counter = 0;
    for (int i = 0; i < arraySize; i++)
    {
        for(int j = 0; j < arraySize; j++)
        {
            if (arr[i] == arr[j])
                counter += 1;
        }
        cout << "The Number  = " << arr[i] << "is repeated " << counter << "   Times" << endl;
        counter = 0; 
    }
}