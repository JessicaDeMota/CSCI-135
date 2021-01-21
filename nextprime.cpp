/*
Author: Jessica De Mota 
Course: CSCI-136
Instructor: Mr.Maryash 
Assignment: LAB 05 ASSIGNMENT C
*/

/*
comment
*/


#include <iostream>
using namespace std;


// this is our formula to make this program run efficiently.


bool isPrime(int n)
{

    int i;
    if(n < 2)
    {
        return false;
    }
    for (i = 2; i <= n-1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
            
    }
    return true;

}

int findnextPrime(int n)
    {
        int nextPrime = n;
    
        for(nextPrime = n+1; nextPrime < nextPrime +10; nextPrime++)
        {
            if (isPrime(nextPrime))
            {
                return nextPrime;
                break;
            }
        
        }
    }


int main ()
{
    int n;
    // Main function is to test the formula 
    // We want our main function to be able to ask the user for two integers to apply this 
    cout << "Enter a positive integer : " << endl;
    cin >> n;
    cout << findnextPrime(n);
    return 0;

}