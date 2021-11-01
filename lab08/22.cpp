#include <iostream> // Including the header file input output stream
using namespace std;    // using std to use cout not to use std::cout 

int main()      // Main function that will return in integer value
{
    int array[] = {78, 45, 56, 45, 87, 98, 12, 32}; // Initializing the array of int values
    int *ptr;   // Integer pointer
    cout << "Values in the Array" << endl;  // Message
    for (int i = 0; i < 8; i++) // For loop that will go up to 7 elements in    array
    {
        cout << *ptr << "   ";  // Printing the address of the values in the array
        ptr++;  // Moving the pointer 1 next
    }
    return 0;   // Returning the Integer value from the main funxtion
}