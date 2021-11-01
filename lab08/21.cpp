#include <iostream> // Including the header file input output stream
using namespace std;    // using std to use cout not to use std::cout 

int main()      // Main function that will return in integer value
{
    float array[5];     //  Array of data type float of 5 elements
    float *ptr; // Pointer that store the address of float
    cout << "Displaying the Address of the Array using For Loop and Using the reference Operator(&)" << endl;   // Message
    for (int i = 0; i < 5; i++) // For loop that will go up to 4
    {
        cout << "&a[" << i << "]" << "  " << &array[i] << endl; // Printing the address of four elements
    }
    ptr = array;    // Giving the address to the pointer

     cout << "Displaying the Address of the Array using For Loop and Using the Indirection Operator (&)" << endl;   // Message
     for (int i = 0; i < 5; i++)        // Printing the address of four elements
    {
        cout << "*a[" << i << "]" << "  " << ptr + i << endl;   // Printing the address using the pointer
    }
}