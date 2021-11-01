#include <iostream>
using namespace std;

class Father
{
    public:
        void Run()
        {
            cout << "Father" << endl;
        }
};

class Mother
{
    public:
        void Run()
        {
            cout << "Mother" << endl;
        }
};

class Child : public Father, public Mother
{

};
int main()
{
    Child c;
    // c.Run(); Ambiutiy Error compiler confuses in Multiple Inheritence
    return 0;
}