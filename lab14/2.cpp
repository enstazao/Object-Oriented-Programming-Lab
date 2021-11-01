#include <iostream>
using namespace std;

class Shape{
    private:
        float size = 20;
    protected:
        float area = 34;
    public:
        float volume = 33;
        void draw(){
            cout << "Parent Class: Shape" << endl;
        }

        void displaySize(){
            cout << "Parent Class: Size" << endl;
        }
};

class Circle: public Shape{
    public:
        void draw(){
            cout << "Child Class: Circle"   << endl;
            cout << "Parent Class : Area: " << area << endl;
            cout << "Parent Class Volume: " << volume << endl;
            displaySize();
        }
};
int main(){
    Shape shape;
    shape.draw();
    Circle circle;
    circle.draw();
    return 0;
};
