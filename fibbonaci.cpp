/*
Author: Jessica De Mota Munoz 
Course: CSCI-136
Instructor: Mr.Maryash
Assignment: LAB 1C

This program makes an array that allows the user to assign an integer 
it creates a while loop that follows the condition for the indexes of the integers 
*/

#include <iostream>
using namespace std;

int main()
{   
    int fib[60];//This creates an array that is with 60 shells

    fib[0] = 0;
    fib[1] = 1;
    int i;
    cout<<fib[0]<<endl<<fib[1]<<endl; // Allows you to print the first 2 
    for (i = 2; i <= 60; i++)
    {
        fib[i] = fib[i-1] + fib[i-2]; // This is the fibbonaci formula. 
        cout<<fib[i]<<endl;
    }


}