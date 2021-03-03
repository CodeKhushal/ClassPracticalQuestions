/*
This Program prints the star pattern
Written By: Khushal Sachdeva
Date: 26 Jan 2020
*/
#include <iostream>
using namespace std;

int main()
{
    for (int i = 11; i > 0; i -= 2)
    {
        for (int j = i; j > 0; j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}
