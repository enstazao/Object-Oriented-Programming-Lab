#include <iostream>
using namespace std;

void Inverse_Matrix();   //Function Prototype

int main()
{
    Inverse_Matrix();   //Calling Function
    return 0;
}

void Inverse_Matrix()
{
    float matrix[2][2] = {{0, 0}, {0, 0}};  // Intilizing Matrix with 0 to remove garbage

    cout << "Enter the Values in the 2*2 Matrix" << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cin >> matrix[row][col];    //Getting Input from User
        }
    }
    float inverseMatrix[2][2];
    int firstLoop = 0, secondLoop = 0,determinant = 0, temp = 0;
    double appender = 0.0;

    //Finding The Determinant
    for (int row = 0; row < 1; row++)
    {
        for (int col = 1; col <= 1; col++)
        {
            firstLoop = matrix[row][row] * matrix[col][col];
            secondLoop = matrix[row][col] * matrix[col][row];
        }
    }

    determinant = firstLoop - secondLoop;
    //Loop End of Findint the Determinent
    // Finding the Adjoint of the Matrix
    for (int row = 0; row < 1; row++)
    {
        for (int col = 1; col <= 1; col++)
        {
            temp = matrix[row][row];
            matrix[row][row] = matrix[col][col];
            matrix[col][col] = temp;
            matrix[row][col] = -1 * matrix[row][col];
            matrix[col][row] = -1 * matrix[col][row];
        }
    }
     // Calculating the Inverse of the Matrix

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            appender = matrix[row][col] / determinant;
            inverseMatrix[row][col] = appender;
        }
    }


    //Printing the Inverseof
    cout << "The Inverse of the Matrix is" << endl;
    cout << "******************************************************" << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cout << inverseMatrix[row][col] << "    ";
        }
        cout << endl;
    }

    cout << "******************************************************" << endl;
}