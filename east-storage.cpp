/*
Author: Jessica De Mota Munoz 
Course: CSCI-136
Instructor: Mr.Maryash 
Assignment: E4.8

Write a program that reads a word and prints each character of the word on a separate line. 
For example, if the user provides the input "Harry", the program prints
*/

#include <iostream>
using namespace std;
#include <string>
int main()

{
    string date;
    float eastSt;
    float eastEl;
    float westSt;
    float westEl;
    
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) 
    {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
    }
    string junk;        // new string variable
    getline(fin, junk); // read one line from the file 
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
    { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 

    cout<<"Enter a date in MM/DD/YY:"
    cin>>date;
    cout<< cout << date << " " << eastSt << endl;
}
