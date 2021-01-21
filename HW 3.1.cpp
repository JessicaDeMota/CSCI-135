/*
 Author: Jessuca De Mota Munoz 
 Course: CSCI-136
 Instructor: Mr.Maryash
 Assignment: HW3.1
 
This program reads an integer and prints whether it is negative, zero, or positive.
*/

#include <iostream>
using namespace std;

int main()
{
    //In order to make the program go through each submission for 3 scenarios 
    // we place it in 3 different if statements so it can be compared 
    // we set our cout statements to equal to zero, positive, negative so it can identify it 

    int number;
    
    cout << "Enter a number: ";
    cin >> number;

    if(number == 0) 
        {
            cout << "zero";
        }
    else if(number > 0) 
        {
            cout << "positive";
        }
    else if(number < 0)
        {
            cout << "negative";
        }

    return 0;

}