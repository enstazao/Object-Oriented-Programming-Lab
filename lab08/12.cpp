#include <iostream>     // Including the Header file of input output stream
using namespace std;    // using std to use cout with out using the std::cout

void fun(int*, int*);       // Function of Name fun and two input parameter and both are integer pointer
int main()      // Main function that will return an Integer Value
{
    int A = 10, B = 20;     // Two Variables of Data type A and Value of 10 and 20
    cout << "Values Before Giving to the Function" << endl;     // Printing only on console
    cout << "A = " << A << endl;    // Printing The value of A
    cout << "B = " << B << endl;    // Printing The value of B
    fun(&A, &B);    // Giving the Addresses of A and B
    cout << "Values After Giving to the Function" << endl;  // Printing only on console
    cout << "A = " << A << endl;    // Printing the Value of After Function Call
    cout << "B = " << B << endl;   // Printing the Value of After Function Call
}

void fun(int *X, int *Y)        // Function that will return nothing and Given the address of A and B
{
    *X = *X + 1;    // One Increment in A
    *Y = *Y + 1;    // One Increment in B
}