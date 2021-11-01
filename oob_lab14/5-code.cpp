#include <iostream>       // Including the Input-Output Stream

using namespace std;    // Using std namespace to use cout

class Employee{    // Class name of Emplyee
    public:   // Access Specifier of public
        Employee()   // Default Constructor which called when object of class is maked
        {
            cout << "Default Constructor Called" << endl; 
        }
};
int main()
{
    Employee e1;  // 1st Instance oc Employee
    Employee e2;  // 2nd Instance of Emplyee
    return 0;
}