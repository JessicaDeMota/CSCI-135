
/*
Author:Jessica De Mota Munoz 
Course: CSCI-136
Instructor: Mr.Maryash 
Assignment: Summation of Integers 

We want to be able to take an input from a text file and read in those numbers assigned within the text file to compose 
a series of calculations within all integers. 
*/

#include <iostream>
using namespace std;
int main() 
{
	int s; 
	int summation = 0 ;
	char j; 

  	 cin >> s;
	 summation = s; // We're setting summation to s, because we're going to assume that the program runs number, characther, num
			        // This will allow the program to run even if it's just 1 number. 

    while(cin >>j>> s) // Read in the following operator that allows you 
	{
		if (j == '+') // Set an if- statement just so we know how it runs with both operators.
		{
       		summation += s; // This operator is used for the arithmetic of adding the numbers.
		} 
        
		else if (j == '-')
		{
			summation -= s;
		}
        else if (j == ';')
        {
            cout<<summation<< endl;
            summation = s;
        }
	}

    cout << summation << endl; //We want to be able to add all the numbers up.

     return 0;
 
}
