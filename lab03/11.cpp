#include <iostream>
using namespace std;

void Matrix_Adder(int firstMatrix[2][2],int secondMatrix[2][2]);

int main()
{
    int firstMatrix[2][2];
    int secondMatrix[2][2];
    cout << "Enter the Value in 2X2 Matrix In First Matrix" << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            cin >> firstMatrix[row][column];
        }
    }
    cout << "Enter the Values in the Second Matrix 2X2 " << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            cin >> secondMatrix[row][column];
        }
        cout << endl;
    }

    cout << "You Enter the Value in first Matrix are " << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            cout << firstMatrix[row][column] << "   ";
        }
        cout << endl;
    }

    cout << "You Enter the values in the second matrix are = " << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            cout << secondMatrix[row][column] << "  ";
        }
        cout << endl;
    }
    Matrix_Adder(firstMatrix, secondMatrix);

    return 0;
} 

void Matrix_Adder(int firstMatrix[2][2],int secondMatrix[2][2])
{
    cout << "The Sum of the Given Matrix is " << endl;
    cout << "===========" << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            cout << firstMatrix[row][column] + secondMatrix[row][column] << "   ";
        }
        cout << endl;
    }
    cout << "==========" << endl;
}