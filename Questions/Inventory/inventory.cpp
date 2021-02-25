/*
This Program shows the inventory report
Written By: Khushal Sachdeva
Date: 26 Nov 2020
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Part Number \t Qty On Hold \t Qty On Order \t Price " << endl;
    cout << " " << setfill('0') << setw(6) << 31235 << "\t" << setfill(' ') << setw(15) << 22 << "\t" << setfill(' ') << setw(15) << 86 << "\t" << setfill(' ') << setw(10) << "$" << 45.62 << endl;
    cout << " " << setfill('0') << setw(6) << 321 << "\t" << setfill(' ') << setw(15) << 55 << "\t" << setfill(' ') << setw(15) << 21 << "\t" << setfill(' ') << setw(10) << "$" << 122.00 << endl;
    cout << " " << setfill('0') << setw(6) << 28764 << "\t" << setfill(' ') << setw(15) << 0 << "\t" << setfill(' ') << setw(15) << 24 << "\t" << setfill(' ') << setw(10) << "$" << 0.75 << endl;
    cout << " " << setfill('0') << setw(6) << 3232 << "\t" << setfill(' ') << setw(15) << 12 << "\t" << setfill(' ') << setw(15) << 0 << "\t" << setfill(' ') << setw(10) << "$" << 10.91 << endl;
    system("pause");
    return 0;
}
