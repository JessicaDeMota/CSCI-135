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
    int myData[10]; // This sets an array 
    int i, v;  // we set integer i and v, i for the indexes and v for the numbers 
    for (i = 0; i < 10; i++) // this for loop allows for all indexes within the array to be 1 
     {myData[i] = 1;   // we assign the array to the indexes to 1 
     }
     do{                               //This while-do loop allows you to do the loop within the while condition.
         for (i = 0; i < 10; i++)      // we want our program to go to the next shell within the array. 
     {cout << myData[i] << " " ;
     }
        cout << endl; 

        cout << "Input index: ";    // User decides what index you want the number to be placed in. 
        cin >> i;
        cout << "Input value: ";  // Allows user to input a value.
        cin >> v;
        if(0 <= i && i < 10)       //if this falls within the range we prinnt the value the user asked for. 
        {
            myData[i] = v;
        }
     }while (0 <= i && i<10);
    
     cout<< "Index out of range. Exit." << endl;  //if this is out of range, then place index is out of range.

    return 0;

}