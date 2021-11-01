#include <iostream>       // Including the Input-Output Stream

using namespace std;    // Using std namespace to use cout

class Circle    // Class Name of Circle
{
    private:   // Access Specifier private that it only accessed in the class
        double radius = 1.5; 
    public:  // Access Specifier of public that it can be accessed in main
        double computeArea()   // Method that will calculate area
        {
            return 3.14 * radius * radius;
        }
};

int main()   // main function where we make instances of class
{
    Circle obj;   // Instance of Circle Class named as obj
    
    // obj.radius = 5;  // Cannot do that because radius is private

    cout << "Area is = " << obj.computeArea() << endl;   // Printing the area and private radius will be used
    return 0;
}