/*
Author: Jessica DeMota 
Course: CSCI-136
Instructor: Mr.Maryash
Assignment:PROJECT HW6.8
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int unbalanced_brackets(string input)
{
 int leftbrackets = 0;
 int rigthbrackets = 0;
 for (int i=0; i<input.length(); i++)
 {
     if(input[i]=='{'){

         leftbrackets++;
     }
     else if (input[i]=='}')
     {
         rigthbrackets++;

     }
    
         
 }
    if (rigthbrackets==leftbrackets) {
            return 0;
        }
        else return leftbrackets-rigthbrackets;

}
int main()
{
    string input;
    cout<< "Enter brackets:";
    getline(cin,input);
    cout<<unbalanced_brackets(input);
    return 0;

}