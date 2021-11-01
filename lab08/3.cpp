#include <iostream> //  Including the header file input output stream 
using namespace std;      //  Including the std to use cout only

int main()  // Main Function that will return an integer
{
    int num = 10;   // Declaring the variable with initial value 10
    int *ptr;   // An integer pointer that will hold the address of the integer
    ptr = &num;  // Storing the Address of the num in ptr
    cout << "The Number is:  " << num << endl;  // Printing the actual value of the number
    cout << "The Address of the Number is (&num):   " << &num << endl;  //Printing the Address of the num using the derefernce operator
    cout << "The Address through pointer is :   " << ptr << endl;  // Printing the Address using pointer
    cout << "The Value Getting using pointer :  " << *ptr << endl;  //Printing the Value using Pointer
    return 0;   // Returning the Integer from main Function
}