#include <iostream>
#include <fstream>

using namespace std;

void Line_Counter();
void Display_Data();

int main()
{
    Line_Counter();
    return 0; 
}

void Display_Data()
{
    ifstream fin("Line_Counter.txt");
    string line;
    while (fin)
    {
        if (fin.eof())
            break;
        getline(fin, line);
        cout << line << endl;
    }
}

void Line_Counter()
{
     ofstream fout;
    fout.open("Line_Counter.txt");
    fout << "Hello World.\nHow are You.\nMy Name is Jawad Ahmed.\nHave a Great Day.\nI am studying in Fast University.";
    fout.close();

    ifstream fin;
    fin.open("Line_Counter.txt");
    string line;
    int lineCounter = 0;
    
    while (fin)
    {
        if (fin.eof())
            break;
        getline(fin, line);
        lineCounter += 1;
    }
    fin.close();

    cout << "The Data in the File is" << endl;
    cout << "**********************************************************" << endl;
    Display_Data();
    cout << "**********************************************************" << endl;
    cout << endl;
    cout << "The Number of Lines in the file are:   " << lineCounter << endl;
}