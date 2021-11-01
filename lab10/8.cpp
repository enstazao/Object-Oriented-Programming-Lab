#include <iostream>
using namespace std;

class Student{
    public:
        double marks;
        Student(double m)
        {
            marks = m;
        }
};

void Calculate_Average(Student s1, Student s2)
{
    double average = (s1.marks + s2.marks) / 2;
    cout << "Average Marks: " << average << endl;
}

int main()
{
    Student student1(88.0), student2(56.0);
    Calculate_Average(student1, student2);
    return 0;
}


/*CODE OUTPUT

Average Marks: 72
*/