/*
Author: Jessica De Mota 
Course: CSCI-136
Instructor: Mr.Maryash 
Assignment:Lab Quiz 05
*/

/*
comment
*/


#include <iostream>
using namespace std;

bool isPrime(int n)
// this is our formula to make this program run efficiently.
{
    int i;
    if ( n < 2)
    {
        return false;
    }
    for (i = 2; i <= n-1; ++i)
    {
        if ( n % i == 0)
        {
            return false;
        }
            
    }
        return true;
} 

int main ()
{
    int n;
    // Main function is to test the formula 
    // We want our main function to be able to ask the user for two integers to apply this 
    cout << "Enter a positive integer : " << endl;
    cin >> n;
    cout << isPrime(n);

      return 0;
}