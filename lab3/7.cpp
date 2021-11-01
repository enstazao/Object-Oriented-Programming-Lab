#include <iostream>
using namespace std;

int main()
{
    int tryNo = 1;
    char guess;
    do
    {
        cout << "Enter character (a--z) to guess :";
        cin >> guess;
        if (guess == 's')
        {
            cout << "Congratulation you guessed correctly and you used guesses" << tryNo << endl;
            break;
        }
        else
            tryNo++;
    }while(tryNo <= 5);
}