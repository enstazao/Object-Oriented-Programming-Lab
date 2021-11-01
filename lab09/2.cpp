#include <iostream>
using namespace std;

class Student
{
    // States of Object: Data Member
    public:
        string name;
        int Age;
        string color;
        string sex;
    // Student behaviour
    void Eating()
    {

    }

    void Drinking()
    {

    }

    void Running()
    {

    }
};


int main()
{
    // First Student
    Student student1;
    student1.name = "Jawad";
    student1.Age = 21;
    student1.color = "Fair";
    student1.sex = "Male";

    student1.Eating();
    student1.Drinking();
    student1.Running();

    Student student2;
    return 0;
}

