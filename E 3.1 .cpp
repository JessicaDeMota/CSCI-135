/*
Author:Jessica De Mota Munoz
Course: CSCI-136
Instructor: Mr.Maryash
Assignment: E 3.1 

Allows to take in a number and determine what kind of integer it is 
*/

#include <iostream>
using namespace std;

int main()
{
    float number;
    cout << " Enter an integer : ";
    cin >> number; 

    if (number > 0 )
        cout <<" This is a negative number";
    else
    {
       if (number < 0 )
       cout << "This is a positive number";
    }
    else
    {
        if (number == 0)
        cout << "This is zero ";
    }
    
    return 0;
}