#include <iostream>
using namespace std;

class Calculations
{
    private:
        int x;
    protected:
        int y = 55;
    public:
        int z;

    Calculations()
    {
        cout << "Calculations Constructor" << endl;
    }

    ~Calculations()
    {
        cout << "Calculations Destructor" << endl;
    }
};

class ChildA : public Calculations
{
    public:
        ChildA()
        {
            cout << "Child A Constrcutor" << endl;
        }
        ~ChildA()
        {
            cout << "Child A Destructor" << endl;
        } 
};

class ChildB : public Calculations
{
    public:
        ChildB()
        {
            cout << "Child B Constructor" << endl;
        }
        ~ChildB()
        {
            cout << "Child B Destructor" << endl;
        }
};

int main()
{
    Calculations obj1;
    ChildA obj2;
    ChildB obj3;
    return 0;
}