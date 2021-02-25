/*
This Program calculates 
i.e do arithemetic operations between two numbers
Written By: Khushal Sachdeva
Date: 26 Jan 2020
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers\nEnter 1st number: ";
    cin >> a;
    cout << "\nEnter 2nd number: ";
    cin >> b;

    cout << "\nWhat operation you want to do (+,-,*,/): ";
    char o;
    cin >> o;
    switch (o)
    {
    case '+':
    {
        cout << "\nThe Sum Is " << a + b;
        break;
    }
    case '-':
    {
        cout << "\nThe Difference Is " << a - b;
        break;
    }
    case '*':
    {
        cout << "\nThe Product Is " << a * b;
        break;
    }
    case '/':
    {
        cout << "\nThe Division Result Is " << float(a) / float(b);
        break;
    }
    default:
    {
        cout << "\nInvalid Input\nShutting Down....";
        break;
    }
    }
}
