#include <iostream>
#include <iomanip>
using namespace std;
const double PI = 3.145445454541;
int main()
{
    double radius = 12.67;
    double height = 12.00;
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "Radius = " << radius << endl;
    cout << "Height = " << height << endl;
    cout << "Volume = " << PI * radius * radius * height << endl;

    cout << setprecision(3);
    cout << "Radius = " << radius << endl;
    cout << "Height = " << height << endl;
    cout << "Volume = " << PI * radius * radius * height << endl;

    cout << setprecision(4);
    cout << "Radius = " << radius << endl;
    cout << "Height = " << height << endl;
    cout << "Volume = " << PI * radius * radius * height << endl;

    cout << setprecision(5);
    cout << "Radius = " << radius << endl;
    cout << "Height = " << height << endl;
    cout << "Volume = " << PI * radius * radius * height << endl;

    return 0;  
}