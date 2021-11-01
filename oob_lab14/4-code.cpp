#include <iostream>       // Including the Input-Output Stream

using namespace std;    // Using std namespace to use cout

class Parent   // Claass name as Parent
{
    protected:  // Access Specifier Protected
        int protectedID;  
    
};

class Child : public Parent   // Child Class
{
    public:
        void setId(int id)
        {
            protectedID = id;
        }
        void displayId()  // Function to display the ID
        {
            cout << "Protexted id = " << protectedID << endl;
        }

};

int main()
{
    Child obj1;  // Making the Object of class Child
 
    obj1.setId(81);  // Setting the Protexted variable to 81
    obj1.displayId();  // Displying the ID
    return 0;  // Returining the Integer
}