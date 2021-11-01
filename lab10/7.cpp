#include <iostream>
using namespace std;

class Test
{
    private:
        char name[20];
    public:
        void get()
        {
            cout << "Enter Your Name:   ";
            cin.get(name, 20);
        }
        void print(Test s)
        {
            cout << "Name is:   " << s.name << endl;
        }
};

int main()
{
    Test test1, test2;
    test1.get();
    test1.print(test1);   
    return 0;
}



/* CODE OUTPUT

Enter Your Name:   Hello World
Name is:   Hello World
*/