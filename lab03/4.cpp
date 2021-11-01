#include <iostream>
using namespace std;

void Array_Merging(int arrOne[], int arrTwo[], int arraySize);

int main()
{
    int arrOne[] = {4, 5, 6, 7};
    int arrTwo[] = {10, 20, 14, 18};
    int arraySize = sizeof(arrOne) / sizeof(arrOne[0]);
    Array_Merging(arrOne, arrTwo, arraySize);
    return 0;
}

void Array_Merging(int arrOne[], int arrTwo[], int arraySize)
{
    int a = 0, w = 0;
    int mrg_aray_Size = arraySize + arraySize;
    int mergeArray[mrg_aray_Size];
    for (int i = 0; i < arraySize; i++)
    {
        mergeArray[i] = arrOne[i];
        if (i == (arraySize - 1))
        {
            for (int innerLoop = arraySize; innerLoop < mrg_aray_Size; innerLoop++)
            {
                mergeArray[innerLoop] = arrTwo[a];
                a += 1;
            }
        }
    }
    int g = 0, check = 0, index = 0, j = 0;
    for (int i = 0; i < mrg_aray_Size; i++)
    {
        g = mergeArray[i];
        for (int  j = i; j < mrg_aray_Size; j++)
        {
            if (g < mergeArray[j])
            {
                g = mergeArray[j];
                check = j;
            }

        }
        mergeArray[check] = mergeArray[index];
        mergeArray[index] = g;
        index += 1;
    }
    cout << "The array After emerging and making in descending order    ----> ";
    cout << "{";
    for (int result = 0; result < mrg_aray_Size; result++)
    {
        cout << mergeArray[result] << " ";

    }
    cout <<  "}" << endl;
}