/*
Author:Jessica De Mota Munoz
Course: CSCI-136
Instructor: Mr.Maryash
Assignment: Homework 6.8 

/comment 
//comment 
//comment 
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <cctype>

using namespace std;

bool equals(int a[],int a_size, int b[], int b_size)
{
    // to know if the arrays line up with another we must test them within a case 
    // take an empty array and compare 
    if(a_size != b_size)
    {
        return false;
    }
    for (int i = 0; i < a_size; i++)
    {
        if(a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int firstarray[100] ;
    int firstarray_size;
    int secondarray[100];
    int secondarray_size;

    cout << equals(firstarray,firstarray_size,secondarray,secondarray_size);
}