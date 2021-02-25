/*
This Program gives Parking Ticket
Written By: Khushal Sachdeva
Date: 26 Nov 2020
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Enter the Type of vehicle- (C for Car/T for Truck/B for Bus): ";
    char v;
    cin >> v;
    int hi, mi;
    cout << "Enter hour of Vehicle entry in 24 hour format - ";
    cin >> hi;
    cout << "Enter minute of Vehicle Entry between 0 & 60 - ";
    cin >> mi;
    int ti;
    ti = (hi * 60) + mi;
    int he, me;
    cout << "Enter hour of Vehicle Exit in 24 hour format - ";
    cin >> he;
    cout << "Enter minute of Vehicle Exit between 0 & 60 - ";
    cin >> me;
    int te, ts, mmm;
    float charge;
    te = (he * 60) + me;
    ts = te - ti;
    mmm = ts % 60;
    ts = int(ts / 60);
    if (v = 'c')
    {
        if (ts <= 1)
        {
            charge = 0;
        }
        else
        {
            charge = 1.5;
        }
    }
    else if (v = 'T')
    {
        if (ts <= 3)
        {
            charge = 1.0;
        }
        else
        {
            charge = 3.5;
        }
    }
    else if (v = 'B')
    {
        if (ts <= 2)
        {
            charge = 1.5;
        }
        else
        {
            charge = 2.5;
        }
    }

    cout << endl
         << endl
         << endl
         << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "|		Parking Ticket" << setw(25) << setfill(' ') << "|" << endl;
    cout << "|Vehicle Entry Time   : " << setw(2) << setfill('0') << hi << ":" << setw(2) << setfill('0') << mi << setw(26) << setfill(' ') << "|" << endl;
    cout << "|Vehicle Exit  Time   : " << setw(2) << setfill('0') << he << ":" << setw(2) << setfill('0') << me << setw(26) << setfill(' ') << "|" << endl;
    cout << "|                 ---------------" << setw(22) << setfill(' ') << "|" << endl;
    cout << "|Vehicle Parking Time : " << setw(2) << setfill('0') << ts << ":" << setw(2) << setfill('0') << mmm << setw(26) << setfill(' ') << "|" << endl;
    cout << "|Net Hours Parked     : " << setw(2) << setfill('0') << ts << " Hours" << setw(23) << setfill(' ') << "|" << endl;
    cout << "|Rate of Parking      : "
         << "$" << left << setw(3) << setfill(' ') << charge << " perHour" << right << setw(19) << setfill(' ') << "|" << endl;
    cout << "|                 ---------------" << setw(22) << setfill(' ') << "|" << endl;
    cout << "|Net Payable Amount   : "
         << "$" << left << setw(3) << setfill(' ') << float(ts * charge) << right << setw(27) << setfill(' ') << "|";
    cout << endl
         << "|" << setw(54) << setfill(' ') << "|" << endl;
    cout << "|         -----Please Visit Again-----" << setw(17) << setfill(' ') << "|" << endl;
    cout << "|-----------------------------------------------------|" << endl;
    cout << endl
         << endl
         << endl;

    system("pause");
    return 0;
}
