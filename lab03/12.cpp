#include <iostream>
using namespace std;

void Multiply_Matrix(int firstMatrix[2][2],int secondMatrix[2][2]);

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
    Multiply_Matrix(firstMatrix, secondMatrix);
    return 0;
}

void Multiply_Matrix(int firstMatrix[2][2],int secondMatrix[2][2])
{
    cout << "The Result is" << endl;
    cout << "===============" << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cout << firstMatrix[row][col] * secondMatrix[row][col] << "     ";
        }
        cout << endl;
    }

    cout << "================" << endl;
}