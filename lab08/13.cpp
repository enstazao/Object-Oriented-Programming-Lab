#include <iostream>     // Including the Header file of Input Output Stream
using namespace std;    // Using std to use cout without std::cout

void Get_Number(int *number)    // Fucntion that will not return anything but given parameter an Address
{
    cout << "Enter Any Number:  ";      // Asking User to Enter the Number
    cin >> *number;     // Storing the Value of user input in number varible using pointer
}

void square(int *number)    // Function that will not return anything and given that address as a parameter
{
    cout << "The Square of the Number using Pointer is = " << (*number) * (*number) << endl;  // Printing the sqaure using pointer
}
int main() // Main Function that will return an Integer Value
{
    int number = 0;     // INtialzing the Number With 0
    Get_Number(&number);    // Passing Value by pass by reference
    square(&number);     // Passing Value by pass by reference
    return 0;   // Returning the Integer Value from the Main Function
}