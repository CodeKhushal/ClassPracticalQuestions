/*
This Program shows the reversed number
Written By: Khushal Sachdeva
Date: 26 Jan 2020
*/
#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    cout << "\nThe reversed number is " << rev;
}
