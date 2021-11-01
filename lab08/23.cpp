#include <iostream> // Including the header file input output stream
using namespace std;    // using std to use cout not to use std::cout 

int main()      // Main function that will return in integer value
{
    int numberOne = 10, numberTwo = 20, numberThree = 30;   // three variables of int data type with values 10, 20, 30
    int *array[3];      // Array of the pointer array that will store address in it
    array[0] = &numberOne;      // At 0 index numberOne address
    array[1] = &numberTwo;  // At 1 index numberTwo address
    array[2] = &numberThree;    // At 2 index numberTwo address
    for (int i = 0; i < 3; i++) // For loop that will go up to 2
    {
        cout << *array[i] << endl;      // Printing the value that is stored in array index by index
    }
    return 0;   // Returning an Integer value form the main function
}