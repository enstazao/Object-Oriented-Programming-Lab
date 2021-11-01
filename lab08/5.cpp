#include <iostream>    //Including the input output Stream header file 
using namespace std;    // using namespace std to use the cout with out using std::cout

int main()  //Our main function that will return an integer value
{
    int *ptr, x;   // Making an integer pointer and int variable that can get int value
    x = 10;     // Giving x a int value of 10
    ptr = &x;  // Giving the Address of x to a pointer 
    cout << "The Value of the x:    " << x << endl; //Printing the Value of x
    cout << "The Value of the *ptr: " << *ptr << endl;  //Printing the value of the pointer 
    cout << "The Value of the ptr:  " << ptr << endl;   //printing the adddress that is obtained by x in Ram
    cout << "Value of the &x:   " << &x << endl;        //Printing address using dereference operator
    return 0;   //Returning an Integer
}