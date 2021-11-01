#include <iostream>
using namespace std;


class Student
{
    private:
        int rollNo;
        string name;
        bool status;
        float result;

    public:
        void getData(int rNo, string Name, bool Status, float Result)
        {
            rollNo = rNo;
            name = Name;
            status = Status;
            result = Result;
        }

        void printData()
        {
            cout << "The ROll No =  " << rollNo << endl;
            cout << "The Name = " << name << endl;
            cout << "The Status = " << status << endl;
            cout << "The Result = " << result << endl;
        }
};


int main()
{
    Student s1;
    s1.getData(22, "Hassan", true, 99.09);
    s1.printData();
    return 0;
}


