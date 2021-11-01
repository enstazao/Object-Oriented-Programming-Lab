#include <iostream>
using namespace std;

void Make_Subset();   //Function Prototype

int main()
{
    Make_Subset();   //Calling Function
    return 0;
}

void Make_Subset()
{
    int array[] = {3, 5, 2, -4, 8, 11};    
    int resultArray[4];
    int Result[2][2];
    int userInput = 0;
    cout << "Enter the Number:  ";    //Getting the number from user that what he want
    cin >> userInput;
    int counter = 0;
    int counterTwo = 0;
    int arraySize = sizeof(array) / sizeof(array[0]);    //Getting the Size of array
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = i + 1; j < arraySize; j++)
        {
            if (array[i] + array[j] == userInput)
            {
                resultArray[counter] = array[i];
                counter += 1;
                resultArray[counter] = array[j];
                counter += 1;
                counterTwo += 1;
            }
        }
    }
    counter = 0;
    for (int row = 0; row < counterTwo; row++)
    {
        for (int col = 0; col < counterTwo; col++)
        {
            Result[row][col] = resultArray[counter];      //Storing subset in an 2d array
            counter += 1; 
        }
    }

    cout << "The Subset of the Number is" << endl;
    cout << "===================================================================" << endl;
    for (int row = 0; row < counterTwo; row++)
    {
        for (int col = 0; col < counterTwo; col++)
        {
            cout << Result[row][col] << "   ";    // Printing the Result
        }
        cout << endl;
    }

    cout << "====================================================================" << endl;
}

