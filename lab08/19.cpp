#include <iostream>     // Including the header file input output stream
using namespace std;    // Using std to use cout not to use std::cout

int main()  //returning the integer value from the function
{
    int y[10];  // Array of 10 elements
    int *yPointer;  // Declaring the Integer Pointer
    yPointer = y;   // Giving the address to pointer

    cout << yPointer << endl;   // Printing the address
    yPointer++; // 1 added in the address
    cout << yPointer + 1 << endl;   // Agian printing the address with one increase
    return 0;
}