/*
This Program shows the swapping of two numbers
Written By: Khushal Sachdeva
Date: 26 Nov 2020
*/
#include <iostream>
using namespace std;
int main()
{
    int a; //Declaration
    int b; //Declaration
    cout << "Enter Two Numbers Here \n Number 1= ";
    cin >> a;
    cout << "\n Number 2= ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "The Numbers after Swapping are \n Number 1= " << a << "\n Number 2=" << b << endl;
    system("pause");
    return 0;
}
