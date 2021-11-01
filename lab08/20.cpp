#include <iostream> // Including the header file input output stream
using namespace std;    // using std to use cout not to use std::cout 

int main()      // Main function that will return in integer value
{
    int array[5] = {2, 4, 6, 8, 10};        // Array of 5 elements of data type int
    int *arrayPointer;      // Declaring the pointer 
    arrayPointer = array;   // Giving the Address to the pointer

    cout << "The Address of the First Index of the Array is = " << &array[0] << endl;       // Printing the first Index address
    cout << "The Array Pointer is = " << arrayPointer << endl;      // Printing the address using the pointer
    cout << "The First Index = " << array[0] << endl;       // Printing the value of zero index
    cout << "The Array First Index through Pointer = " << *arrayPointer << endl;    // printing the value
    return 0;   // Returning an Integer from our main function
}