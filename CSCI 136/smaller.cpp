/*
Author: Jessica De Mota Munoz 
Course: CSCI-136 
Instructor: 
Assignment: Small Numbers 

This program finds the smaller of two integers 
*/

#include <iostream>
using namespace std;

int main()
{
    int num1;
    /*always need to define the characthers that are being used 
    /*in this case it's num1 and num2 */
    int num2;

    cout <<"Enter the first number:"; 
    cin >>num1; /*This allows for you to be able to store the input under the num1*/
    cout <<"Enter the second number:";
    cin >> num2;

    if (num1 > num2){
        cout <<"The smaller of the two is" <<
    num2 << endl; 
              }else{
                  cout <<"The smaller of the two is "<<
    num1<<endl;
              }
        return 0;
}