/*
Author : Jessica De Mota Munoz 
Course : CSCI -136 
Instructor : Mr. Maryash 
Assignment : E5.6 Homework 

The program allows to find the middle characters within a string.

*/
#include <iostream>
#include <string>
using namespace std;

// we include the header string because it has to include string to have string 


//PSEUDO CODE : 
// we're going to need to get the length of the string in order to divide it when it's even or odd using 2 if statements 
// one if statement if even one if statement if odd or we can return 2 different scenarios in this case 
// we're looking for the middle characthers so this is a substring - a portion of the user input 
// if divisible by 2 it prints the integer in the middle and the following one 
// if odd aka divisible by 2 -1 then we want it to print the letters in the middle 
// we need a user input because it can be any word 
//we can use a boolean to say if this occurs then this will happen if true ..
// connect the result to the original function .

string middle(string str) // this is the function that we are using to call for our middle values.
{
    int x = str.length();    // we have to make a variable for the length of the string in order to determine when its odd and even. 

    if ((x % 2) == 0) // if this is true that when it has no remainder than return these cases.. 
    {
        return str.substr(x/2 -1, 2);
    }
        return str.substr(x/2, 1);
}
int main ()
{  
    string user_input;
    cout << "Enter a word to identify the middle characther : ";
    cin >> user_input;
    string result = middle(user_input);
    cout << "The middle characther is :  " << result << endl; 

    return 0;
}
