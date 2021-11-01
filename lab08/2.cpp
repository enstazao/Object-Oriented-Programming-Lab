#include <iostream>     //  Including the header file input output stream 
using namespace std;    //  Including the std to use cout only

int main()   // Main Function that will return an integer
{
    int varOne = 3;   // Initaling the varone with 3
    int varTwo = 5;   // Initaling the varTwo with 5
    int varThree = 45;    // Initaling the varthree with 45
    cout << "The VarOne has a Address:  " << &varOne << endl;   // Printing the Address using derefrence operator
    cout << "The VarTwo has a Address:  " << &varTwo << endl;   // Printing the Address using derefrence operator
    cout << "The VarThree has a Address:  " << &varThree << endl;   // Printing the Address using derefrence operator
    return 0;   //Returning an integer
}