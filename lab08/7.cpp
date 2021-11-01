#include <iostream>   // Including the Header file Input Output Stream
using namespace std;  // USing std to use cout without writing every time std::cout

int main()  //Main function that will return an Integer Value
{
    void *ptrOne, *ptrTwo, *ptrThree, *ptrFour;     // Pointer of type void that can hold address of any data type
    int i; char c; float f; double d;   // Making Variable of Different data type
    cout << "Enter the Integer Value:   ";      // Asking user to Enter an Integer Value
    cin >> i;   // Storing Input in i
    cout << "Enter the Character Value: " ; // Asking user to Enter an Character
    cin >> c;  //Storing that character in c
    cout << "Enter the Float Value: ";  //Asking user to Enter the Float Value
    cin >> f;  //Storing that float value in f
    cout << "Enter the Double Value:    ";      // Asking user to Enter the Double
    cin >> d;   // Storing user input in d using Extraction operator
    ptrOne = &i;    // Storing the Address in pointer
    ptrTwo = &c;     // Storing the Address in pointer
    ptrThree = &f;       // Storing the Address in pointer
    ptrFour = &d;        // Storing the Address in pointer

    cout << "The Integer has a Address: " << ptrOne << endl;        //Printing the Address Using Pointer
    cout << "The character has a Address: " << ptrTwo << endl;      //Printing the Address Using Pointer
    cout << "The Float has a Address: " << ptrThree << endl;        //Printing the Address Using Pointer
    cout << "The Double has a Address: " << ptrFour << endl;        //Printing the Address Using Pointer

    return 0;  //Returning an Integer Value from Main Function
}