/*
This Program calculates the charge according to the distance travelled
Written By: Khushal Sachdeva
Date: 26 Jan 2020
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double cost;
    int distance;
    cout << "\nEnter distance in KiloMetres: ";
    cin >> distance;
    if (distance >= 0 && distance <= 100)
        cost = 20.00;
    else if (distance > 100 && distance <= 500)
        cost = 50.00;
    else if (distance > 500 && distance < 1000)
        cost = 100.00;
    else if (distance <= 1000)
        cost = 150.00;
    else
        cout << "\nInvald Input ";
    cout << "\nThe cost is " << fixed << setprecision(2) << cost;
    return 0;
}
