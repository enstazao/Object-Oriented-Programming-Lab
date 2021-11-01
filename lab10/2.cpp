#include <iostream>
#include <string.h>

using namespace std;

class Student{
    int Roll;
    string Name;
    float marks;

    public:
        Student(int r, string nm, float n)
        {
            Roll = r;
            Name = nm;
            marks = n;
        }

        void Display()
        {
            cout << "Roll No:   " << Roll << endl;
            cout << "Name:   " << Name << endl;
            cout << "Marks:   " << marks << endl;
        }
};

int main()
{
    Student S1(2, "Ali", 89.63);
    Student S2(S1);
    cout << "The Value of S1" << endl;
    S1.Display();
    cout << "The Values in S2" << endl;
    S2.Display();
    Student S3 = S1;
    cout << "The Value in S3" << endl;
    S3.Display();
    return 0;
}


/* Output of the COde

The Value of S1
Roll No:   2
Name:   Ali
Marks:   89.63
The Values in S2
Roll No:   2
Name:   Ali
Marks:   89.63
The Value in S3
Roll No:   2
Name:   Ali
Marks:   89.63
*/