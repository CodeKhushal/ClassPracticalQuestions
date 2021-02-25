/*
This Program give grade from scores
Written By: Khushal Sachdeva
Date: 26 Nov 2020
*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    0 < a < 100;
    cout << "Enter Test Score between 0-100 to know your grade:";
    cin >> a;
    cout << endl;
    char grade;
    if (a >= 90)
    {
        grade = 'A';
        cout << "Your Grade is:" << grade << "\nCongratulations! Keep it up" << endl;
    }
    else if (a >= 80)
    {
        grade = 'B';
        cout << "Your Grade is:" << grade << "\nCongratulations! You have potential" << endl;
    }
    else if (a >= 70)
    {
        grade = 'C';
        cout << "Your Grade is:" << grade << "\nWork Hard, You can get it to top" << endl;
    }
    else if (a >= 60)
    {
        grade = 'D';
        cout << "Your Grade is:" << grade << "\nWork Hard, Better luck next time" << endl;
    }
    else if (a >= 50)
    {
        grade = 'E';
        cout << "Your Grade is:" << grade << "\nWork Hard, Better luck next time" << endl;
    }
    else
    {
        grade = 'F';
        cout << "Your Grade is:" << grade << endl;
    }
    system("pause");
    return 0;
}
