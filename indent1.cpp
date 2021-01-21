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

string removeLeadingSpaces(string x);
int countChar(string x, char c);
// our removing Leadingspace function allows to take the input of a string 
// and specifically the first space 
string removeLeadingSpaces(string x)
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

// same format as the last one 
// we want to count and increment the count to find the '{'
int countChar(string x, char c)
{
    int counter = 0; 
    for(int i = 0; i < x.length(); i++)
    {
        if(x[i]==c)
        {
        counter ++;
        }
        
    }
    return counter;
}

int main()
{
    // must be able to call in our file to see the errors
    string get; 
    int count = 0;

    while(getline(cin,get))
    {
        if (count == 2 and countChar(removeLeadingSpaces(get), '}'))
        {
            count --;
        }
       else if(count == 1 and countChar(removeLeadingSpaces(get), '}'))
       {
           count --;
       }
       for(int i = 0; i < count; i++)
       {
           cout<< "\t";
       }
       cout << removeLeadingSpaces(get) << endl;
       if(countChar(removeLeadingSpaces(get), '{'))
       {
           count++;
       }
    }
    return 0; 
}