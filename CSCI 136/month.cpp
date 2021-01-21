/*
Author: Jessica De Mota Munoz 
Course: CSCI-136
Instructor: Mr.Maryash
Assignment: LAB 1C

This program asks the user to input the year and the month 
Prints the number of days within that month 
*/

#include <iostream>
using namespace std;

int main()
{
    int month;
    int days;
    int year; 
    bool leap;
    //We're going to replace the cout from last code with a boolean 
    //A boolean allows us to declare that a statement is either true or false. 
 

	cout <<"Enter a year:"<<endl;
	cin >> year; 

    if (year % 4 !=0)
    { 
	leap = false;
    }
    //Most years are divisible by 4 
     else if  (year % 100 !=0)
    {
     leap = true;
    }
    else if (year % 400 !=0)
    {
     leap = false;
    //This is a Century year so it has to be divided by 400.
    }
    else 
    {
    leap = true;
    }
    

  return 0;

}
