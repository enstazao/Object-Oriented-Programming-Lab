#include <iostream>
using namespace std;

int main()
{
float firstNumber = 0.0, secondNumber = 0.0;
cout << "Enter the First Number = ";
cin >> firstNumber;
cout << "Enter the Second Number = ";
cin >> secondNumber;
char operation;
cout << "Enter the operation You want to perform +, -, *, /:";
cin >> operation;
switch(operation)
{
case '+':
cout << "The Sum of the Given Two Number is = " << firstNumber + secondNumber << endl;
break;
case '-':
cout << "The Difference of the Given Two Numbers is = " << firstNumber - secondNumber << endl;
break;
case '*':
cout << "The Multiply of the Given Two Numbers is = " << firstNumber * secondNumber << endl;
break;
case '/':
cout << "The Division of the Given Two Numbers is = " << firstNumber / secondNumber << endl;
break;
default:
cout << "Please Enter the operation that are Mentioned" << endl;
}
return 0;}