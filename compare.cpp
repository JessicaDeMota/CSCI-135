/*
Author: Jessica De Mota Munoz 
Course : CSCI-136
Instructor : Mr.Maryash 
Assignment : Comparing Elevations 

This program is able to compute arithmetic equations that include the 
square notation by peeking into the previous operation.

*/

#include <fstream>
#include <cstdlib>
#include <climits>

int main()
{
    string date;        // new string variable
    string startdate;
    string enddate;
    double WEST;
    double EAST; 
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
        string junk;
        getline(fin, junk); // read one line from the file 

        cout << "Enter a starting date: ";
        cin >> startdate;
        cout << "Enter a end date :  ";
        cin >> enddate;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
    { 
        


    

    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 

    // for example, to print the date and East basin storage:
    
}