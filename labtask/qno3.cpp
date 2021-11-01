#include <iostream>
#include <fstream>
#include <iomanip>

void Add_Data();
void Display_Data();

using namespace std;

int main()
{
    Add_Data();
    return 0;
}
void Add_Data()
{
    string movieName;
    int adultTicketPrice, childTicketPrice, adultSoldTicket, childSoldTicket, totalTicketSold;
    double percentageGross = 0.0;

    cout << "Enter the Movie Name:  ";
    getline(cin, movieName);

    cout << "Enter the Adult Ticket Price :  ";
    cin >> adultTicketPrice;

    cout << "Enter the Child Ticket Price:  ";
    cin >> childTicketPrice;

    cout << "Enter the Adult Sold Ticket:   ";
    cin >> adultSoldTicket;

    cout << "Enter the Child Sold Ticket:   ";
    cin >> childTicketPrice;

    cout << "Enter the Total Ticket Sold:   ";
    cin >> totalTicketSold;

    cout << "Enter the Percetage Gross: ";
    cin >> percentageGross;


    int grossAmount = (adultTicketPrice * adultSoldTicket) + (childTicketPrice * childTicketPrice);

    int amountDonated = grossAmount * percentageGross / 100;

    int netSaleAmount = grossAmount - amountDonated;

    ofstream fout("Movie_Data.txt");
    fout << "__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*\n";
    fout << left;
    fout << setw(65)  << setfill('.') << "Movie Name:    " << "  " << movieName << "\n";  
    fout << setw(65) << setfill('.') << "Number of Tickets Sold:    " << "  " << totalTicketSold << "\n";
    fout << setw(65) << setfill('.') << "Gross Amount:  " << "  $" << grossAmount << "\n";
    fout << fixed << showpoint;
    fout << setprecision(2);
    fout << setw(65) << setfill('.') << "Percentage of Gross Amount Donated:    " << "  " << percentageGross << "%\n"; 
    fout << setw(65) << setfill('.') << "Amount Donated:    " << "  $" << amountDonated << "\n";
    fout << setw(65) << setfill('.') << "Net Sale:  " << "  $" << netSaleAmount << "\n";
    fout.close();
    string userInput;
    cout << "The Data is Added Successfully You Want to Read the Data on console Y or N:    ";
    cin >> userInput;
    cout << endl << endl;
    if (userInput == "Y" || userInput == "y")
    {
        Display_Data();
    }
    else{
        cout << "Data is added successfully you can check" << endl;
    }
}

void Display_Data()
{
    ifstream fin;
    fin.open("Movie_Data.txt");
    string line;
    while (fin)
    {
        if (fin.eof())
            break;
        getline(fin, line);
        cout << line << endl;
    }
}