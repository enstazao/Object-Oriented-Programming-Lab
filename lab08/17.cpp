#include <iostream>     // Including the header file of input output stream
using namespace std;    // using std to use cout not std::cout

int main() // Main Fucntion that will return an Integer Value
{
    short numbers[] = {2, 4, 6, 8, 10};  // array of short that take 2 bytes 
    cout << "The First Element using pointer is = " << *numbers << endl; //Printing the numbers[0] usig pointer
    return 0;   // Returning the Integer from main Function
}