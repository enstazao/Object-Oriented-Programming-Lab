#include <iostream>
using namespace std;

class Shape{
    private:
           double x = 123;
    public:
           friend void MyFriend(Shape);

};

void MyFriend(Shape obj){
    cout << obj.x << endl;
}

int main(){
    Shape obj;
    MyFriend(obj);
    return 0;
}