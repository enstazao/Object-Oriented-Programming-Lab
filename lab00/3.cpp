#include <iostream>
using namespace std;

struct Person{
    char name[30];
    int age;
    float salary;
};

int main()
{
    Person p1, p2, p3, p4;
    cout << "Enter the Student Name = ";
    cin.getline(p1.name, 20);

    cout << "Enter the Student Age = ";
    cin >> p1.age;

    cout << "Enter the Salary = ";
    cin >> p1.salary;

    cout << "The Person has a Name = " << p1.name << endl;
    cout << "The Person has a Age = " << p1.age << endl;
    cout << "The Person has a Salary = " << p1.salary << endl;

    cin.ignore();
    cout << "Enter the Student Name = ";
    cin.getline(p2.name, 20);

    cout << "Enter the Student Age = ";
    cin >> p2.age;

    cout << "Enter the Salary = ";
    cin >> p2.salary;

    cout << "The Person has a Name = " << p2.name << endl;
    cout << "The Person has a Age = " << p2.age << endl;
    cout << "The Person has a Salary = " << p2.salary << endl;
    return 0;
}