#include <iostream>
using namespace std;

/*
Inheritence Types In OOP
public inheritence the public and protected become protected and public in the child class
protected the protected members parent public and protected both become protected in child class
private the public and protected both become private in the child class
** Use Pascal & Camel Case in the code **
** Hybrid Inheritence is the combination of mulitple and multilevel inheritence ** 
If Access specifier not mentioned then bydefult the private
Ambiguity occur in Mulitple Inheritence when both parents have same name and the compiler confuses to run that code
*/

class Calculations
{
    private:        // Cannot be accessed in the Child Class
        int x;
    protected:
        int y = 55;   // Can be Accessed in the Parent and in the Child Class
    public:
        int z;
};

class Child : public Calculations
{
    public:
        void display()
        {
            cout <<  "Private x = " << y << endl;
        }
};

int main()
{
    Child c;
    c.display();
    return 0;
}