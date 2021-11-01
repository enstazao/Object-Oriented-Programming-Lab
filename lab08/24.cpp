#include <iostream> // Including the header file input output stream
using namespace std;    // using std to use cout not to use std::cout 

int main()      // Main function that will return in integer value
{
    char *a = "Hello";  // Giving the character to a
    cout << a << endl;  // Printing the value of a
    cout << &a << endl; // Printing the address of a
    cout << *a << endl; // printing the pointing value of a
    cout << a[0] << endl;   // Printing a[0] index
    cout << a++ << endl;    // Incrementing 1
    cout << *a++ << endl;   // incrementing 1 in pointer
    return 0;   // Returning an integer value in main function
}