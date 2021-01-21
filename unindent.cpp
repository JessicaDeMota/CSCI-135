/*
Author:Jessica De Mota Munoz
Course: CSCI-136
Instructor: Mr.Maryash
Assignment: Lab 7A

unident the formatting of a program 
*/


#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

string removeLeadingspace(string x);
// our removing Leadingspace function allows to take the input of a string 
// and specifically the first space 
string removeLeadingspace(string x)
{
    // take an empty string 
    string y = "";
    // we want to grab the first characther in order to 
    // align the formatting 
    char c;
    // we want to use length so we grab specifically the space where it is first identified 
    int len = x.length();
    for(int i = 0; i < len; i++)
    {
        c = x[i];
        if(!isspace(c))
        {
            // increment to go through each space
            while(i < len)
            {
                y += x[i];
                i++;
            }
        }
    }
        return y; 
}

int main()
{
    // must be able to call in our file to see the errors
    string get; 

    while(getline(cin,get))
    {
        removeLeadingspace(get);
        cout << removeLeadingspace(get) << endl;
    }
    return 0; 
}