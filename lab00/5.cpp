#include <iostream>
using namespace std;

struct Student{
    char name[30];
    int rollNo;
    float Marks;
};
Student Get_Data(Student s);
void Display_Data(Student s);

int main()
{
    Student s;
    s = Get_Data(s);
    Display_Data(s);
    return 0;
}

Student Get_Data(Student s)
{
    cout << "Enter the Name of a Student: ";
    cin.getline(s.name, 20);
    cout << "Enter the ROll No  of the Student: ";
    cin >> s.rollNo;
    cout << "Enter the Marks of the Student: "; 
    cin >> s.Marks;
    return s;
}

void Display_Data(Student s)
{
    cout << "The Student has a Name: " << s.name << endl;
    cout << "The Student has a Roll No : " << s.rollNo << endl;
    cout << "The Studen has Marks: " << s.Marks << endl;
}