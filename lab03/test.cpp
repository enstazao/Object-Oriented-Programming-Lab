#include <iostream>
#include <conio.h>
#include <iomanip>

using namespce std;

// Formatted I/O Example:

int main(){

    float num = 34.89989789789;
    cout << "Value: " << num;                    // Unformated Output
    cout << fixed << setprecision(3) << num;     // Formated Out    
    return 0;
}