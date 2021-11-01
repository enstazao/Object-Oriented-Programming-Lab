#include <iostream>
using namespace std;

const int size = 5;
class Student
{
    int roll_no;
    int marks[size];
    public:
    void getData();
    void tot_marks();
};


int main()
{
    Student s1;
    s1.getData();
    s1.tot_marks();
    return 0;
}

void Student::getData()
{
    cout << "Enter Your Roll No:    ";
    cin >> roll_no;

    for (int i = 0;i < size; i++)
    {
        cout << "Enter the Marks in Subject  " << i + 1 << " : ";
        cin >> marks[i];
    } 
}