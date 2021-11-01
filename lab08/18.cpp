#include <iostream>         // Including the input output stream header file
using namespace std;        // using std to use cout not to use std::cout

int main()      // Main function that will return an Integer Value
{
    int array[5] = {2, 4, 6, 8, 10};        // Array of 5 elements and datatype of int
    int *ptr;   // Declaring the integer pointer
    ptr = array;    // Giving the pointer the address
    cout << "The Address of the First Index = " << &array[0] << endl;       // Printing the address of array 0 elemetns
    cout << "The Address of the First Index using pointer is = " << ptr << endl;    // Printing the address using the pointer
    cout << "The First Index of the Array is = " << array[0] << endl;       // Printing the array[0] element using the indexing
    cout << "The First Index of the Array using pointer is = " << *ptr << endl; // Printing the value using the pointer
    return 0;   // Returning the integer value from the main function
}