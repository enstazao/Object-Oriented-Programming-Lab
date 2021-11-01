#include <iostream>       // Including the Input-Output Stream

using namespace std;    // Using std namespace to use cout

class Circle   // Declaration of the class and class name is Circle
{
    private:   // Private Access Specifier that these variables can only be accessed in class
        double radius = 1.5;  // radius variable of data type double
    public:     // Access Specifier of public that it can be accessed in main
        double computeArea()    //Function that will return double
        {
            return 3.14 * radius * radius;  // returning the area
        }
    void setRadius(double radius)   // Set radius of private
    {
        this->radius = radius;   // Setting the class radius to given value by user
    }

    double getRadius()
    {
        return radius;   // Getting the radius
    }
};

int main()
{
    Circle obj;  // Instance of class Circle of name obj
    double radius = 0;   // Variable of data type double
    cout << "Enter the Radius:  ";   // Enter the Radius
    cin >> radius; // Storing radius in radius variable using Extraction operator

    obj.setRadius(radius);   // Caaling the Set radius function
    cout << "The Radius is = " << obj.getRadius() << endl;   // Getting the radius the private radius
    cout << "The area is = " << obj.computeArea() << endl;   // Gettting the area
    return 0; // Returning the integer value
}

