#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   float num = 34.265516571;
   cout << "Value = " << num << endl;
   cout << fixed << setprecision(10) << "Value = " << num << endl;
   return 0;
}