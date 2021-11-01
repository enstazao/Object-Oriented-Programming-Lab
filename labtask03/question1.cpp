#include <iostream>
using namespace std;

class Account{
    private:
        int accountNumber;
        double balance;
    public:
        int Get_Account_Number();
        double Get_Balance();
        void Set_Balance(double balance);
        void Credit(double amount);
        void Debit(double amount);
        void Print();
        Account(int accountNumber, double balance);
};

int Account::Get_Account_Number(){
    return accountNumber;
}

double Account::Get_Balance(){
    return balance;
}

void Account::Set_Balance(double balance){
    this->balance = balance;
}

void Account::Credit(double amount){
    balance = balance + amount;
}

void Account::Debit(double amount){

    if (balance >= amount){
        cout << "The Deducted Amount from your balance is: " << amount
        << " and your new balance is: " << balance - amount << endl;
        this->balance = balance - amount;
    }

    else{
        cout << "Your Current Balance " << balance << "  and is lesser then your given amount " << endl; 
    }
}

void Account::Print(){
    cout << "Account No:   "   << accountNumber << endl;
    cout << "Your Balance: " << balance       << endl;
}

Account::Account(int accountNumber, double balance){
    this->accountNumber = accountNumber;
    this->balance       = balance;
}

int main(){
    int amount = 0;
    Account *account;
    cout << "Line 1: Calling the Default Construct \n";           // Line 1
    Account a(200165, 4554.44);
    account = &a;
    cout << "Line 2: Printing the Account Number and Balance \n"; // Line 2
    account->Print();

    cout << "Line 3: Debiting the Amount of 5000000" << endl;   // Line 3
    account->Debit(5000000);

    cout << "Line 4 : Adding More Amount to my Balance" << endl;  // Line 4
    account->Credit(500000);

    cout << "Line 5 : Again Adding some more amount so we can debit" << endl; // Line 5
    account->Debit(500000);
    return 0;
}
