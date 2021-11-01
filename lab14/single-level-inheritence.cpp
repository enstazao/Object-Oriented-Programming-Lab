#include <iostream>
using namespace std;

class First{
    public:
     int x;
    First(){
        x = 0;
        cout << x << endl;
    }

    ~First(){
        cout << "Parent DeConstructor Called" << endl;
    }
};

class Second: public First{
    public:
     Second(){
         x = 120;
         cout << x << endl;
     }

     ~Second(){
         cout << "Child Destructor Called" << endl;
     }
};

int main(){
    First f;
    Second s;
    return 0;
}