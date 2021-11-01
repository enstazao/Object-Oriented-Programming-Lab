#include <iostream>
using namespace std;

class Student_Record
{
private:
    char name[15];
    float s1, s2, s3, total, avg;

public:
    void Get_Record();
    void Display_Record();
};

void Student_Record::Get_Record()
{
    cout << "Enter the Name of the Student: ";
    cin >> name;

    cout << "Enter the marks of subject 1: ";
    cin >> s1;

    cout << "Enter the Marks of the subject 2: ";
    cin >> s2;

    cout << "Enter the Marks of the subject 3: ";
    cin >> s3;

    total = s1 + s2 + s3;
    avg = total / 3.0;
}

void Student_Record::Display_Record()
{
    cout << "The Name of the Student is = " << name << endl;
    cout << "The Subject 1 Marks --- " << s1 << endl;
    cout << "The Subject 2 Marks --- " << s2 << endl;
    cout << "The Subject 3 Marks --- " << s3 << endl;
    cout << "Total Marks--- " << total << endl;
    cout << "Average Marks --- " << avg << endl;
}

int main()
{
    // Declare the object of class
    Student_Record stdRecord;
    stdRecord.Get_Record();
    stdRecord.Display_Record();

    return 0;
}

