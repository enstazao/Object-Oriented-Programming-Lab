#include <iostream>     // Including the header file of input output stream
using namespace std;    // using std to use cout with out std::cout

int Sum(int , int);     // Function that will return an Integer and Given Two parameter of both integer
int (*ptr)(int, int);   // Function that hold the address

int main()      //Main Function that will return an Integer value
{
    int a, b, rs;       // Declaring Three variables of data type of int
    cout << "\nEnter the First Number:  ";      // Enter First Number
    cin >> a;       // Storing the value in a using the extraction operator
    cout << "Enter the Second Number:   ";  // Enter First Number
    cin >> b;        // Storing the value in b using the extraction operator
    ptr = Sum;      // storing the addrss of sum function in ptr
    rs = (*ptr)(a, b);  // Calling the Function using pointer
    cout << "The SUm using pointer is = " << rs << endl;    // Printing the returned value from function
    return 0;       // rETURNING  Integer value from function
}

int Sum(int numOne, int numTwo) // Function that will return an Integer and Given Two parameter of both integer
{
    return numOne + numTwo; // return the sum of Two Number
}