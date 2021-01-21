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

bool isDivisibleBy(int n, int d)
// this is our formula to make this program run efficiently.
{
    if (d == 0 ) // we have to set d to 0 because it has to be able to be divisibke by 0 
    {
        return false;
    }
     if ((n % d )== 0) // if the numerator is divisible by denominator it will equal to 0. 
     {
         return true;
     }
    else                //if not divisibly then it returns false 
        {
            return false;
        }
    
    
} 

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

int countPrimes(int a, int b);
//we need to make a porgram that runs through each integers range and find the primes.
// a <= x <= b - this is our formula for how we want it to go.
// in order to get the range we need to make values ascend 
// we need to say if this number is prime then it shall print out the ranges between it 
// has to pass through each integer 
{ 
    int num = 0;
    for (int i=a, i<=b, i++)
    {
        // since isPrime is a boolean you can set it true to be able to work under our conditions
        // assign the variable 
        if(isPrime(i)) == true)
        {
            // everytime that it's prime we want it to ascend by 1 to the number 
            // we set number to 0 so it can input these values 
            num++;
        }
        return num; 
    }
}

int main ()
{
    int a,b;
    // Main function is to test the formula 
    // We want our main function to be able to ask the user for two integers to apply this 
    cout << "Enter an integer : " << endl;
    cin >> a;
    cout << "Enter another integer:" << endl; 
    cin >>b;
}
