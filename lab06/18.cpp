#include <iostream>
#include <iomanip>

using namespace std;
const double PI = 3.145657658;

int main()
{
    cout << "2 Decimal Points" << endl;
    double radius = 12.67;
    double height = 12.00;
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "Radius = " << radius << endl;
    cout << "Height = " << height << endl;
    cout << "Volume = " << PI * radius * radius * height << endl;

    cout << "3 Decimal Points" << endl;

    cout << fixed << showpoint;
    cout << setprecision(3);
    cout << "Radius = " << radius << endl;
    cout << "Height = " << height << endl;
    cout << "Volume = " << PI * radius * radius * height << endl;

     cout << "4 Decimal Points" << endl;

    cout << fixed << showpoint;
    cout << setprecision(4);
    cout << "Radius = " << radius << endl;
    cout << "Height = " << height << endl;
    cout << "Volume = " << PI * radius * radius * height << endl;

     cout << "5 Decimal Points" << endl;

    cout << fixed << showpoint;
    cout << setprecision(5);
    cout << "Radius = " << radius << endl;
    cout << "Height = " << height << endl;
    cout << "Volume = " << PI * radius * radius * height << endl;
    return 0;
}