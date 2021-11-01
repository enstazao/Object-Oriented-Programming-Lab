#include <iostream>         //Header File of iostream that contain all  cout,cin
using namespace std;        //Using it because we want to use cout not std::cout

void Stairs_Step_Counter(int N);      //Function Prototype

int main()       //Code Starting point
{
    int steps = 0; 
    cout << "Enter How Many Stairs are:    ";    // Taking Input From User how many stairs are
    cin >> steps;
    Stairs_Step_Counter(steps);   //Calling Function
    return 0;
}

void Stairs_Step_Counter(int N)
{
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = 1;
    }

    cout << "The Ways are" << endl;
    cout << "***********************************************" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << "    ";
    }
    cout << endl;
    int n_arr[N - 1];
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j == i)
            {
                n_arr[j] = arr[i] + arr[j];
            }
            else
                n_arr[j] = arr[j];
        }
        for (int p = 0; p < N - 1; p++)
        {
            cout << n_arr[p] << "   ";
        }
        cout << endl;
    }

    cout << "*****************************************************************" << endl;
}