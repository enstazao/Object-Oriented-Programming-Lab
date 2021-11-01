#include <iostream>  // Including the Header file input output stream
using namespace std;    // using std to use cout without writing the std::cout

int main()      //Main function that will return an integer value
{
    int b[3];   // Array of Integer and that has 3 element
    int *a = b; // Storing the address of b[0] in pointer a
    cout << a << endl;  // Printing the address of b[0]
    a++;  // Moving one next in Ram
    cout << a << endl;      // Printing address after One Increment
    a--;  // Subtracting 1
    cout << a << endl;  // Again printing the address after one subtract
    a = a + 2;  // Moving 8 bytes more from present address
    cout << a << endl;  // Again printing the address
    return 0;   // Returning the Integer Value
}