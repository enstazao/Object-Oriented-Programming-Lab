#include <iostream>  // Including the Header file for input output stream
using namespace std;    // using std to use cout not std::cout

int main()  // Main Fucntion that will return an Integer Value
{
    int vals[] = {4, 7, 10};    // Array of integers
    cout << vals << endl;       // Printing the address of val[0]
    cout << vals[0] << endl;        // Printing the value of val[0]
    return 0;       //returning an Integer from main function
}