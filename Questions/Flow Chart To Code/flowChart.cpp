/*
Written By: Khushal Sachdeva
Date: 26 Jan 2020
*/
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    float z;
    cout << "Enter two numbers\nEnter 1st number: ";
    cin >> x;
    cout << "\nEnter 2nd number:  ";
    cin >> y;

    if (x > 0)
    {
        y = x - 1;
        z = 2 * x;
    }
    else
    {
        if (y > 0)
        {
            z = y;
        }
        else
        {
            z = x;
            y = x + 1;
        }
        z = z + 1;
    }
    cout << "\nx is " << x << "\ny is " << y << "\nz is " << z;
}
