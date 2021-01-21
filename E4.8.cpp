/*
Author: Jessica De Mota Munoz 
Course: CSCI-136
Instructor: Mr.Maryash 
Assignment: E4.8

Write a program that reads a word and prints each character of the word on a separate line. 
For example, if the user provides the input "Harry", the program prints
*/
#include <iostream>
using namespace std;
#include <string>
int main()

{
    string s;
    
    cout << "Enter string:  " ;
    cin >> s;

    int len_s = s.length();
// This allows for a loop for the integer to be assigned to a = 0
// add 1 for each index 
// take the len of a and add 1 each time. 
    for (int a=0; a <= len_s; a++ )
    {
    
        cout << s[a] << endl;
        
    }

    return 0;

}