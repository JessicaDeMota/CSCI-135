
/*
Author: Jessica De Mota Munoz
Course: CSCI-136
Instructor: Mr.Maryash
Assignment:PROJECT 2B
//
///
///
//
//
//
//
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

// maintain the same as project task a 
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

char DNAbase_to_mRNAbase(char dna);
string DNA_to_mRNA(string dna);
string dictionary_read(ifstream &dict, string base);

int main()
{
   ifstream fin("dna2b.txt");
    if(fin.fail())
    {
       cerr<< "File dna2b.txt cannot be read, opened, or does not exist.\n";
       exit(1);
    }
   ifstream dict("codons.tsv");
    if (dict.fail())
   {
       cerr << "File codons.tsv cannot be read, opened, or does not exist.\n";
       exit(1);
   }
   string strand;
   while(getline(fin,strand))
   {
    string mRna= DNA_to_mRNA(strand);
    bool startEncode = false;

    for(int i=0; i<mRna.length(); i+=3)
        {
        if(dictionary_read(dict,mRna.substr(i,3))=="Met")  // we want to transcribe the different casses.
        {
            startEncode =true ;
        }
        if(dictionary_read(dict,mRna.substr(i,3))=="Stop")
        {
            startEncode = false;
        }
        if(startEncode==true)
        {
            cout<< dictionary_read(dict,mRna.substr(i,3));
        }
        if((startEncode==true)&& dictionary_read(dict,mRna.substr((i+3),3)) !="Stop")
        {
            cout << "-";  // remember the last part of the codon. 
        }
    }
        cout << endl<<endl;;
     
   }
   fin.close();

   dict.close();

   return 0;

}
