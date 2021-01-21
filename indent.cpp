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

string removeLeadingSpaces(string x)
{

    string y = "";
    
    char c;
    
    int len = x.length();
    for(int i = 0; i < len; i++)
    {
        c = x[i];
        if(!isspace(c))
        {
           
            while(i < len)
            {
                y += x[i];
                i++;
            }
        }
    }
        return y; 
}


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