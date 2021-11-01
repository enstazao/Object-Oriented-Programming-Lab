#include <iostream>
using namespace std;

void Search_Program();

int main()
{
    Search_Program();
    return 0;
}

void Search_Program()
{
    string studentFirstNames[] = {"Jawad", "Qasim", "Ali", "Rustam", "Arbab", "Tayyab", "Esa"};
    string studentLastNames[] = {"Ahmed", "Fareed", "Asghar", "Ali", "Gujjar", "Changez", "Khan"};
    int studentAges[] = {19, 20, 20, 18, 21, 16, 25};
    int studentID[] = {1001, 1002, 1003, 1004, 1005, 1006, 1007};
    string favouriteSport[] = {"Cricket", "Football", "Badminton", "ValleyBall1", "Race", "LongJump", "FootBall"};
    string favouriteFood[] = {"Burger", "Pizza", "Meat", "Apple", "Mango", "Vegetables", "Tommato"};
    float CGPA[] = {3.1, 3.0, 3.5, 2.0, 3.9, 4.0, 3.2};
    char firstNameInput[30];
    string f_input, l_input, sport, food;
    int age, ID;
    float cgpa;

    char whileCondition;
    cout << "Do You Want to search the Student or Not Press 'Y' for yes and 'N' for No: ";
    cin >> whileCondition;

    while (whileCondition == 'Y' || whileCondition == 'y')
    {

        cout << "Press '1' for FName" << endl;
        cout << "Press '2' for LName" << endl;
        cout << "Press '3' for Age" << endl;
        cout << "Press '4' for  ID" << endl;
        cout << "Press '5' for Sport" << endl;
        cout << "Press '6' for Food" << endl;
        cout << "Press '7' CGPA" << endl;

        cout << "What Do You want to search By:";
        int input;
        cin >> input;


        if (input == 1)
        {
            cout << "ENter the First Name:  ";
            cin >> f_input;
            for (int i = 0; i < 7; i++)
            {
                if (studentFirstNames[i] == f_input)
                {
                    cout << "The Student has a Name:    " << studentFirstNames[i] + " " + studentLastNames[i] << endl;
                    cout << "The Student has a Age:     " << studentAges[i] << endl;
                    cout << "The Student has a Id:      " << studentID[i] << endl;
                    cout << "The Student has a Favorite Sport  " << favouriteSport[i] << endl;
                    cout << "The Student has a Favourite Fodd: " << favouriteFood[i] << endl;
                    cout << "The Student has a CGPA          : " << CGPA[i] << endl;
                    break;
                }
            }
        }

        if (input == 2)
        {
            cout << "Enter the Last Name:   ";
            cin >> l_input;
            for (int i = 0; i < 7; i++)
            {
                if (studentLastNames[i] == l_input)
                {
                    cout << "The Student has a Name: " << studentFirstNames[i] + " " + studentLastNames[i] << endl;
                    cout << "The Student Has A Age: " << studentAges[i] << endl;
                    cout << "The Student Has ID:    " << studentID[i] << endl;
                    cout << "The Student has a Favourite Sport: " << favouriteSport[i] << endl;
                    cout << "The Student has a Favourite Food:  " << favouriteFood[i] << endl;
                    cout << "The Student has a CGPA:    " << CGPA[i] << endl;
                    break;
                }
            }
        }

        if (input == 3)
        {
            cout << "Enter the Age of the Student :";
            cin >> age;
            for (int i = 0; i < 7; i++)
            {
                if (studentAges[i] == age)
                {
                    cout << "The Student has a Name:    " << studentFirstNames[i] + " " + studentLastNames[i] << endl;
                    cout << "The Student Has A age:     " << studentAges[i] << endl;
                    cout << "The Student Has A ID:      " << studentID[i] << endl;
                    cout << "The Student Has A Favourite Sport: " << favouriteSport[i] << endl;
                    cout << "The Student Has A Favorite Food    " << favouriteFood[i] << endl;
                    cout << "The Student has a CGPA:    " << CGPA[i] << endl;
                    break;
                }
            }
        }

        if (input == 4)
        {
            cout << "Enter the ID of the Student:   ";
            cin >> ID;

            for (int i = 0; i < 7; i++)
            {
                if (studentID[i] == ID)
                {
                    cout << "The Student has a Name:    " << studentFirstNames[i] + " " + studentLastNames[i] << endl;
                    cout << "The Student Has A age:     " << studentAges[i] << endl;
                    cout << "The Student Has A ID:      " << studentID[i] << endl;
                    cout << "The Student Has A Favourite Sport: " << favouriteSport[i] << endl;
                    cout << "The Student Has A Favorite Food    " << favouriteFood[i] << endl;
                    cout << "The Student has a CGPA:    " << CGPA[i] << endl;
                    break;
                }
            }
        }

        if (input == 5)
        {
            cout << "Enter the Favourite Sport of the Student: ";
            cin >> sport;
            for (int i = 0; i < 7; i++)
            {
                if (favouriteSport[i] == sport)
                {
                    cout << "The Student has a Name:    " << studentFirstNames[i] + " " + studentLastNames[i] << endl;
                    cout << "The Student Has A age:     " << studentAges[i] << endl;
                    cout << "The Student Has A ID:      " << studentID[i] << endl;
                    cout << "The Student Has A Favourite Sport: " << favouriteSport[i] << endl;
                    cout << "The Student Has A Favorite Food    " << favouriteFood[i] << endl;
                    cout << "The Student has a CGPA:    " << CGPA[i] << endl;
                    break;
                }
            }
        }

        if (input == 6)
        {
            cout << "Enter the Favorite Food of the Student:    ";
            cin >> food;

            for (int i = 0; i < 7; i++)
            {
                if (favouriteFood[i] == food)
                {
                    cout << "The Student has a Name:    " << studentFirstNames[i] + " " + studentLastNames[i] << endl;
                    cout << "The Student Has A age:     " << studentAges[i] << endl;
                    cout << "The Student Has A ID:      " << studentID[i] << endl;
                    cout << "The Student Has A Favourite Sport: " << favouriteSport[i] << endl;
                    cout << "The Student Has A Favorite Food    " << favouriteFood[i] << endl;
                    cout << "The Student has a CGPA:    " << CGPA[i] << endl;
                    break;
                }
            }
        }

        if (input == 7)
        {
            cout << "Enter the CGPA of the Student: ";
            cin >> cgpa;

            for (int i = 0; i < 7; i++)
            {
                if (CGPA[i] == cgpa)
                {
                    cout << "The Student has a Name:    " << studentFirstNames[i] + " " + studentLastNames[i] << endl;
                    cout << "The Student Has A age:     " << studentAges[i] << endl;
                    cout << "The Student Has A ID:      " << studentID[i] << endl;
                    cout << "The Student Has A Favourite Sport: " << favouriteSport[i] << endl;
                    cout << "The Student Has A Favorite Food    " << favouriteFood[i] << endl;
                    cout << "The Student has a CGPA:    " << CGPA[i] << endl;
                    break;
                }
            }
        }
        cout << "Do You Want to search more Students or Not Press 'Y' for yes and 'N' for No:   Y";
        cin >> whileCondition;

    }
}