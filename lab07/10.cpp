#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream my_file;
    my_file.open("Hello_World.txt", ios::in);
    if (!my_file)
    {
        cout << "No Such File" << endl;
    }

    else{
        char ch;
        while (1)
        {
            char ch;
            while(1)
            {
                my_file >> ch;
                if (my_file.eof())
                {
                    break;
                }
                cout << ch;
            }
        }
    }
    my_file.close();
    return 0;
}