/*
Author: Jessica De Mota 
Course: CSCI-136
Instructor: Mr.Maryash 
Assignment: LAB 05 ASSIGNMENT C
*/

/*
comment
*/


#include <cctype>
#include <iostream> 
#include <string>

using namespace std; 

int main()
{
    string sentence;

    cout << " Enter a phrase " << endl;

    while (getline(cin, sentence))
        {
            for (int i = 0; i < sentence.length(); i++)
                {
                    cout << sentence[i]  << " " << int(sentence[i]);
                    cout << endl; 
                }
        }
}

