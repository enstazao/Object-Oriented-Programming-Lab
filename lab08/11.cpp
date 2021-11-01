#include <iostream>     //Including the Header file of input output stream
using namespace std;       //Using the std to use cout without std::cout

void fun(int, int);     // Fucntion that will return nothing and given two values and both are integers
int main()      // Our Main Function that will return an Integer
{
    int A = 10, B = 20;     // Two Varibles of Data Type int and Values os 10 and 20
    cout << "Values Before Giving to the Function" << endl;     // Printing the message on console
    cout << "A = " << A << endl;    // Printing the Value of A on console
    cout << "B = " << B << endl;    // Printing the Value of B on console
    fun(A, B);  // Giving the Function Two Parameter A and B
    cout << "Values After Giving to the Function" << endl;  // Printing the message on console
    cout << "A = " << A << endl;    // Printing the Value of A after function Call
    cout << "B = " << B << endl;      // Printing the Value of A after function Call
}

void fun(int X, int Y)   // Fucntion that will return nothing and given two values and both are integers
{
    X = X + 1;  // One Incremented in A
    Y = Y + 1;  // One Incremented in A
}