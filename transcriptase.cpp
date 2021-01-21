/*
Author: Jessica De Mota 
Course: CSCI-136
Instructor: Mr.Maryash 
Assignment: LAB 05 ASSIGNMENT C
*/

/*
comment
*/

#include <cstdlib>
#include <string>
// reads in any strings 
#include <fstream>
//reads in text files
#include <iostream>

using namespace std;

char DNAbase_to_mRNAbase(char x);

char DNAbase_to_mRNAbase(char x)
{
    if (x == 'A' || x == 'a')
    {
        return 'U';
    }
    if (x == 'T' || x == 't')
    {
        return 'A';
    }
    if (x == 'C'||  x == 'c')
    {
        return 'G';
    }
    if (x == 'G' || x == 'g')
    {
        return 'C';
    }
}

int main()
{

    string sentence;

 ifstream file("dna.txt"); // this is the file we're reading in 

    if (file.fail()) 
    {
        cerr << "File cannot be read, opened, or does not exist.\n";
        exit(1);
    }
    
    
    while(getline(file, sentence)) 
    {
      for (size_t i=0; i<sentence.length();i++)
      {
        cout << DNAbase_to_mRNAbase(sentence[i]) ;
      }
        cout << endl; 
    }

    file.close();
    
    return 0;
}