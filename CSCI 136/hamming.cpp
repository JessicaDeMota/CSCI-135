
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
fstream f;

f.open("mutations.txt")

string x,y;

while(f>>x)
{
    f>>y;

    int ham=0;

    for(int i=0; i<x.length();i++)
        if(x[i] !=y[i])
        ham++;

    cout << ham << " ";

    if(ham == 0)
        cout << "no";
    else 
        cout <<"yes  ";
}
    return 0;
}
