#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string x);
int countChar(string x, char c);

int main() 
{
   string x;
   int tabs = 0;
   while (getline(cin, x))
   {
       x = removeLeadingSpaces(x);
        tabs -= countChar(x), '}');
       for (int i = 0; i < tabs; i++) 
       {
           cout << "\t";
       }
       cout << x << endl;
        tabs += countChar(x) '{');
    }
   return 0;
}

string removeLeadingSpaces(string x) 
{
   string result = "";
   bool check = true;
   for (int i = 0; i < x.size(); ++i) 
   {
       if (!(check && isspace(x[i]))) 
       {
           result += x[i];
           check = false;
       }
   }
   return result;
}

int countChar(string x, char c) 
{
   int count = 0;
   for (int i = 0; i < x.size(); ++i) 
   {
       if(x[i] == c) 
       {
           count++;
       }
   }
   return count;
}