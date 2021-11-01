#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream my_file;
    my_file.open("Hello_World.txt", ios::out);
    if (!my_file)
            cout << "File Not Created" << endl;

    else{
        cout << "File Created Successfully" << endl;
        my_file.close();
    }
    return 0;
}