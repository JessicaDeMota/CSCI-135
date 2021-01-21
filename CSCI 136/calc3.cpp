/*
Author: Jessica De Mota Munoz 
Course : CSCI-136
Instructor : Mr.Maryash 
Assignment : Calculator Program , Project 1D 

This program is able to compute arithmetic equations that include the 
square notation by peeking into the previous operation.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int s;
    int total =0;
    char o;
    char prevo = '+';

    cin>> s;

    while (cin >> o) // this look for the characther 
        {
        if (o== '^') // we set the characther to be the square notation.
            {
                s = s * s;
                cin >> o;
            }
         if (prevo == '+') // looks at the plus and adds it to the total.
            {
                total += s;

            }
        else if (prevo == '-') // looks at the minus and adds 
            {
                total -= s;
            }

        cin >> s; // sets s to the number
        prevo = o;

        if (o == ';') // if a semicolon is found it prints the total. 
            {
                cout << total << endl;
                total = 0;
                prevo = '+';
            }
        }

        return 0;
}








