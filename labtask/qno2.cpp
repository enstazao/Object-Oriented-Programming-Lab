#include <iostream>
#include <fstream>

using namespace std;

void Display_Table(int number, int reachValue);
void Add_Table(int number, int reachValue);

int main()
{
    int reachValue = 0;
    int number = 0;
    cout << "Enter Which Number Table you Want: ";
    cin >> number;
    cout << "Enter How Many Multiples You Want: ";
    cin >> reachValue;
    cout << endl;
    Add_Table(number, reachValue);
    Display_Table(number, reachValue);
    return 0;
}

void Add_Table(int number, int reachValue)
{
    cout << "Writing Table To a File" << endl;
    ofstream fout;
    fout.open("Tableof10");
    fout << "Table of  " << number << "\n";
    for (int start = 1; start <= reachValue; start++)
    {
        fout << number << " X " << start << " " <<  " = " << number * start << "\n";
    }
    fout.close();
    cout << "The Table is written " << endl << endl;;
}

void Display_Table(int number, int reachValue)
{
    cout << "Getting Data from a file" << endl << endl;
    ifstream fin;
    fin.open("Tableof10");
    string line;
    while (fin)
    {
        if (fin.eof())
            break;
        getline(fin, line);
        cout << line << endl;
    }
    fin.close();
}

