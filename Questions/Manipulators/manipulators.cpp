/*
This Program shows the use of Manipulators like setwidth
Written By: Khushal Sachdeva
Date: 26 Nov 2020
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int d = 123;
    float f = 1.23;
    char ch = 'A';
    cout << "Demonstrate set width manipulator"
         << "\n";
    cout << setw(5) << d << "\n";
    cout << setw(5) << f << "\n";
    cout << setw(5) << ch << "\n";
    system("pause");
    return 0;
}
