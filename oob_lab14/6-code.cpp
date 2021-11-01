#include <iostream>   //  Including the Header file of Input-Output Stream
#include <string.h>  

using namespace std;  // Using the Namespace of std
 
class Student   // Class Declaration of name Student
{
    // ByDefault the Access Specifier is private
    int Roll;   
    char Name[25];

    float Marks; 
    // Access Specifier Declaration of public
    public:
        Student()  // Default COnstruct that call on instance creation
        {
            Roll = 1;
            strcpy(Name, "Kumar");
            Marks = 78.42;
        }

    void Display()  // FUnction that display the private members
    {
        cout << "The Roll No:   " << Roll << endl;
        cout << "The Name:  " << Name << endl;
        cout << "The marks: " << Marks << endl;
    }

};

int main()  
{
    Student S;  // Instance creation
    S.Display(); // Calling the method
    return 0;  // Returning the iNteger

}
