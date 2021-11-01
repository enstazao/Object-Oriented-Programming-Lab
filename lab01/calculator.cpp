#include <iostream>
//In Ubantu There is no need of string but in windows there is //sometimes needed
#include <string>
using namespace std;

int main()
{
float firstNumber = 0.0, secondNumber = 0.0;
cout << "Enter First Number:";
cin >> firstNumber;
cout << "Enter Second Number:";
cin >> secondNumber;
string x = "";
cout << "Enter the operation that you want +, -, *, /";
cin >> x;
if (x == "+")
cout << "The sum of the Given Two Number is : " << firstNumber + secondNumber << endl;
else if (x == "-")
cout << "The Difference if the Given Two Number is : " << firstNumber - secondNumber << endl;
else if (x == "*")
cout << "The Multiplication of the Given Two Number is : " << firstNumber * secondNumber << endl;
else if (x == "/")
cout << "The Division of the Given Two Numbers is : " << firstNumber / secondNumber << endl;

else 
cout << "Enter the mentioned operations" << endl;
return 0;
}