/*
This Program shows the sum and product of digits of a number
Written By: Khushal Sachdeva
Date: 26 Jan 2020
*/
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, prod = 1;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0)
    {
        int rem = n % 10;
        prod = prod * rem;
        sum += rem;
        n = n / 10;
    }
    cout << "\nSum of digits is :" << sum << "\nProduct of the digits is :" << prod;
}
