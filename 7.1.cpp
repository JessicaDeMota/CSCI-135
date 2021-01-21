
/*
Author:Jessica De Mota Munoz
Course: CSCI-136
Instructor: Mr.Maryash
Assignment: Lab 7A

unident the formatting of a program 
*/

#include <iostream>
using namespace std;

// we need to be able to create a pointer that can replace the values of x and y 
// first we need to define x and y within the sorting function

void sort2(double* p, double* q);
int main()
{
   double x,y;
   cout << "Enter first value: "<< endl;
   cin >> x;
   cout << "Enter second value: " << endl;
   cin >> y;
  // this then replaces x and y for the pointers 
   sort2(&x,&y);
   cout << x << y;
   return 0;
}

void sort2(double* p, double* q)
{

   if(*p > *q)
   {  
       double call = *p;
       *p = *q;
       *q = call;
   }
}