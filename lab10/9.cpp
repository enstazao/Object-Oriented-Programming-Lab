#include <iostream>
using namespace std;

class Student{
    public:
        double marks1, marks2;
};

Student createStudent() {
    Student student;

    student.marks1 = 96.5;
    student.marks2 = 75.0;

    cout << "The Marks 1 : " << student.marks1 << endl;
    cout << "The Marks 2 : " << student.marks2 << endl;
    return student;
}

int main()
{
    Student student1;
    student1 = createStudent();
    return 0;
}


/* 

The Marks 1 : 96.5
The Marks 2 : 75
*/