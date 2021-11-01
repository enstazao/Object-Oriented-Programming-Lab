#include <iostream>
using namespace std;

class Employee
{
    private:
        int id;
        string name;
        float salary;

    public:
        Employee(int i, string n, float s)
        {
            id = i;
            name = n;
            salary = s;
        }

        void display()
        {
            std::cout << id << "  " << name << "   " << salary << std::endl;
        }
};

int main()
{
    Employee e1 = Employee(101, "Ali", 89000);
    Employee e2 = Employee(102, "Saad",  59000);
    e1.display();
    e2.display();
    return 0;
}





/* OUTPUT OF THE CODE


101  Ali   89000
102  Saad   59000
*/