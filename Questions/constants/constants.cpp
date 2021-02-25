/*
This Program shows the three ways to use constants
Written By: Khushal Sachdeva
Date: 26 Nov 2020
*/
#include <iostream>
using namespace std;
#define PI 3.14159
int main()
{
    const double pi = 3.14159;
    cout << "Define Constant PI: " << PI << "\n";
    cout << "Memory Constant PI: " << pi << "\n";
    cout << "Literal Constant PI: " << 3.1415926536 << "\n";
    system("pause");
    return 0;
}
