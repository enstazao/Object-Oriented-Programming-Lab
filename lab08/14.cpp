#include <iostream> // Including the Header file of input output stream
using namespace std;    // Using the std to use cout not std::cout
int * reference(int n)      //  Function that will return an pointer and Given as a parameter an integer
{
    return &n;      // Returning the address of n
}

int main()  //Main Function that will return an Integer Value
{
    int A = 10;     // Variable A of Data type int
    int *ptr;   // Integer pointer that will hold the address of in
    cout << "The Address of the " << A << "  in the main is = " << &A << endl;  // Printing the address of A
    ptr = reference(A);     // Storing the returned address from function in pointer
    cout << "The Address of the " << A << " in reference is = " << ptr << endl; // Printing the address now
    return 0;   // Returning an Integer Value

}