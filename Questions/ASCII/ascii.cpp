/*
This Program shows the ASCII values of selected characters
Written By: Khushal Sachdeva
Date: 26 Nov 2020
*/
#include <iostream>
using namespace std;
int main()
{
    char A = 'A';
    char b = 'b';
    char zero = '0';
    char eight = '8';
    char NL = '\n';
    char HT = '\t';
    char SP = '_';
    char BS = '\b';
    char Dollar = '$';
    char dblQuote = '\"';
    char oneQuote = '\'';
    char backSlash = '\\';
    char ruppee = '₹';
    cout << "Value of ASCII character A is " << int(A);
    cout << "\nValue of ASCII character b is " << int(b);
    cout << "\nValue of ASCII character 0 is " << int(0);
    cout << "\nValue of ASCII character 8 is " << int(8);
    cout << "\nValue of ASCII character Newline is " << int(NL);
    cout << "\nValue of ASCII character Horizontal Tab is " << int(HT);
    cout << "\nValue of ASCII character Space is " << int(SP);
    cout << "\nValue of ASCII character Backspace is " << int(BS);
    cout << "\nValue of ASCII character Dollar is " << int(Dollar);
    cout << "\nValue of ASCII character Double Quote is " << int(dblQuote);
    cout << "\nValue of ASCII character One Quote is " << int(oneQuote);
    cout << "\nValue of ASCII character Backslash is " << int(backSlash);
    cout << "\nValue of ASCII character Ruppee is " << int(ruppee) << endl;
    system("pause");
    return 0;
}
