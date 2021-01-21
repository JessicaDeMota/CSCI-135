/*
Author: Jessica De Mota Munoz 
Course: CSCI-136
Instructor: Mr.Maryash 
Assignment: LAB 05 ASSIGNMENT C
*/

/*
comment
*/
#include <iostream>

using namespace std;


void sort2(int& a, int& b)
{

    int x;

    if (a > b )
    {
        x = a;
        a = b;
        b = x; 
    }
}


int main()
{
    int input1;
    int input2; 

    cout << "Enter a number :" << endl;
    cin >> input1;

    cout << "Enter another number : " << endl;
    cin >> input2;

    sort2(input1,input2);

    cout << "input1 is  =   " << input1 << "input2 is =    " << input2 << endl;


    return 0;
}