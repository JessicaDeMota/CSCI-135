/*
Author:Jessica De Mota Munoz
Course: CSCI-136
Instructor: Mr.Maryash
Assignment: Lab 4F

The program allows for you to be able to print asteriks that print in an 
upside-down trapezoid shape pattern using width and height  
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
    //think of the dimmensions of a trapezoid and how we can do it amongst an array 
    // for size t allows for the column and row to be inatialized
    
    if((width % 2 == 1 && ((width / 2) +1) >= height) || (width % 2 == 0 && (width/2) >= height))
        {
                for(size_t column = 0; column < height ; column ++)
                    {
                        for(size_t space = 0; space < column; space++)
                        {
                            cout << " ";
                        }
                        for(size_t a =0; a < width; a++)
                            {
                                cout << "*";
                            }
                        for(size_t space =0; space < column; space ++)
                            {
                                cout << " ";

                            }
                        
                            
                            cout <<" "<< endl;
                            width -=2;
                    }
        }
    else 
    {
        cout << "Impossible shape";
    }
    return 0;
}