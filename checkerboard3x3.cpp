/*
Author:Jessica De Mota Munoz
Course: CSCI-136
Instructor: Mr.Maryash
Assignment: Lab 4F

The program allows for you to be able to print asteriks that print in a
checkerboard that is 3x3
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main()
{
    int width;
    int height;
    
    cout << "Please enter a width : ";
    cin >> width ;
    cout << "Please enter a height : ";
    cin >> height;
    cout << "   "<< endl;

    for(size_t row=0; row < height; row++)
        {
            cout << endl;
            for(size_t column = 0; column < width; column++)
            {
                // in original checkerboard program we used an if statement knowning that
                // our spaces are %2 in this case the difference is that it's 3x3
                // therefore we must see what happens when our rows are divisible by 3
                
                if((row/3 ) % 2 == 0)
                {
                    if ((column/3) % 2 == 0)
                    {
                        cout <<"*";
                    }   
                    else 
                    {
                        cout << " ";
                    }
                }
                
                else if ((row /3) % 2 !=0)
                    if ((column/3) % 2 == 0)
                    {
                        cout << " ";
                    }
                    else 
                    {
                        cout << "*";
                    }

            }
        }
}