#include <iostream>       // Including the Input-Output Stream

using namespace std;    // Using std namespace to use cout

class Circle    // Declaration of class Name Circle
{
    public:   // Access Specifier of public mean it can be accessed in main
        double radius;   // radius of data type double
        double ComputerArea()   // Method 
        {
            return 3.14 * radius * radius;   // Area Calculating
        }
};

int main()   // Main Function to call our class and make objects of it
{
    Circle obj;    // Instance of Class named Circle Instance name = obj
    obj.radius = 5.5;   // Setting radius to 5.5

    cout << "The Radius is = " << obj.radius << endl;   // Printing the Radius
    cout << "The Area is = " << obj.ComputerArea() << endl;  // Printing the area 
    return 0;  // Returning an Integer value
}