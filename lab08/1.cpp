#include <iostream>   //  Including the header file input output stream 
using namespace std;  //  Including the std to use cout only

int main()  // Main Function that will return an integer
{
    int number = 10;  // Declaring the variable with initial value 10
    cout << "The Value of the Number is = " << number << endl;  // Printing the Value that number have
    cout << "The Address of the Number is = " << &number << endl;  // Printing the address using reference operator
    return 0;  //Returning and integer
}