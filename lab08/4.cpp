#include <iostream>   //Including the Header file input output stream
using namespace std;  // Picking the cout from std to use it 

int main()  //Main Function which will return the integer
{
    int *pc, c;  // Declaring the pointer the integer
    c = 5;   // Giving the c of value of 5
    cout << "The Address of the Variable c in Ram:  " << &c << endl; // Printing the Address of c
    cout << "The Value of c stored in Ram:   " << c << endl << endl;  // printing the value of the c

    pc = &c;  // Giving the address to the pointer pc
    cout << "The Address of the pc holds in the memory is:  " << pc << endl;  // Printing the Address 
    cout << "The value of the pc holds:  " << *pc << endl << endl;  //Printing the Value from Address

    c = 11;  //Changing the Value of the c
    cout << "The Address of the c now:  " << pc << endl; // Printing the Address Again
    cout << "The Value pc is holding in the ram is: " << *pc << endl << endl; // Printing the value from Address

    *pc = 45;  //Changing the Value from Address
    cout << "The Address of the c in Ram(&c):   " << &pc << endl;  //Printing the Address
    cout << "The Value of the c Now:     " << c << endl << endl << endl;  //Printing the Value of c
    return 0;
}