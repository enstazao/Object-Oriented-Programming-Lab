#include <iostream>   //Including the Header file of input output stream
using namespace std;    // using std to use cout with writing every time std::cout

int main()  //Main Function that will return an Integer Value
{
    int value = 7;      // variable of Data type int and has a value 7
    int *ptr = &value;      // Pointer holding the address of the value

    cout << ptr << "\n";        // Printing the address
    cout << ptr + 1 << "\n";    // Printing the address 1 next mean 4 byte next
    cout << ptr + 2 << "\n";       //Printing the Address 2 next 8 byte next
    cout << ptr + 3 << "\n";    //Printing the Address 3 next 12 byte
    return 0;   //Returning an Integer Value from the main function
}