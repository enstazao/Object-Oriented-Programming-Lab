#include <iostream>         //Including the Header file of input output stream
using namespace std;        // Using std to use cout with out writing std::cout

int main()  //Main Function that will return an Integer Value
{
    int a = 10, *b, *c;  // Making 2 Integer Pointer Varible and int variable
    b = &a;         // Giving Pointer the address of a
    c = b;      // Giving the Address of a that is stored in b to another variable c
    cout << *b << "\t" << *c  << endl;      // Printing the value that is stored in the integer pointer
    return 0;       // Returning the Integer value from the main function
}