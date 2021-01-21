/*
Author: Jessica De Mota Munoz 
Course: CSCI-136
Instructor: Mr.Maryash 
Assignment:PROJECT 2B
*/

/*
comment
*/

/*
comment
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string dictionary_read(ifstream&dict, string searchkey)
{
    string key;
    string value;
    dict.clear();
    dict.seekg(0);
    while(dict >> key >> value)
    {
        if(searchkey.compare(key)==0)
        {
            return value;
        }
    }
    return " ";
}

char DNAbase_to_mRNAbase(char dna)
{
    if(toupper(dna)=='A')
    {
    return 'U';
    }
    else if (toupper(dna)=='T')
    {
        return 'A';
    }
    else if (toupper(dna)=='C')
    {
        return 'G';
    }
    else if (toupper(dna)=='G')
    {
        return 'C';
    }
    else 
    {
        return ' ';
    }
}

string DNA_to_mRNA(string input)
{
string output = "";

for(int i= 0; i < input.length(); i++)
{
output = output + DNAbase_to_mRNAbase(input[i]);
}
return output; 
}



void get_amino_rep(ifstream&fin,string str)
{
    cout << "amino-acid chain: ";
    string amino;
    int start_flag = 0;
    for (int i=0; i<(str.size()-2); i=i+3)
    {
        amino = dictionary_read(fin,str.substr(i,3));
        if(start_flag == 0 && amino.compare("Met")==0)
        {
            start_flag = 1;
            cout << amino;
            continue;
        }
        if(start_flag == 1)
        {
            if(amino.compare("Stop")==0)
            {
                break;
            }
            cout << "-"<< amino;
        }
    }
}


int main()
{
   ifstream fin("dna2b.txt");
   ifstream fincodons("codons.tsv");
   string strand;
   string aa;
   if (fin.fail())
   {
       cerr<< "File dna2b.txt cannot be read, opened, or does not exist.\n";
       exit(1);
   }
   if(fincodons.fail())
   {
       cerr << "File codons.tsv cannot be read, opened, or does not exist.\n";
       exit(1);
   }
   while(getline(fin,strand))
   {
       cout << strand << "";
       aa = DNA_to_mRNA(strand);
       cout << aa;
       size_t found = aa.find("AUG");
       if(found!= string::npos)
       {
           get_amino_rep(fincodons,aa.substr(found));
       }
       else 
       {
           cout << "-AUG codon not found.";
       }
       cout << endl;
   }

   fin.close();

   fincodons.close();

   return 0;

}



