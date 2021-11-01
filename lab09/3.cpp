#include <iostream>
using namespace std;


class Student
{
    // Data Members
    public:
        int id;
        string name;
        double salary;

    private:
        int data = 99;

};

int main()
{
    Student s1;

    s1.id = 556;
    s1.name = "Rustam";
    s1.salary = 600000;

    cout << "The Student Id = " << s1.id << endl;
    cout << "The Student Has a Name:    " << s1.name << endl;
    cout << "The Student Has Salary:    " << s1.salary << endl;

    return 0;
}


