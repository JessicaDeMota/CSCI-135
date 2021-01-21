/*
Author: Jessica De Mota Munoz
Course: CSCI-136
Instructor: Mr.Maryash
Assignment:PROJECT 2C
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

char DNAbase_to_mRNAbase(char c);
string DNA_to_mRNA(string dna);
string dictionary_read(ifstream &dict, string base);
string mainAmino(ifstream &dict, string mRna);
int hammingDistance(string a, string b);


int main()
{
   ifstream fin("mutations.txt");
    if(fin.fail())
    {
       cerr<< "File  cannot be read, opened, or does not exist.\n";
       exit(1);
    }
   ifstream dict("codons.tsv");
      if (dict.fail())
       {
             cerr << "File  cannot be read, opened, or does not exist.\n";
             exit(1);//
       }



   string strand_1;
   string strand_2;

   while(getline(fin, strand_1))
   {

      getline(fin,  strand_2);

      string mRna_1 = DNA_to_mRNA(strand_1);//
      string mRna_2 = DNA_to_mRNA(strand_2);//

      string amino_1 = mainAmino(dict, mRna_1);//
      string amino_2 = mainAmino(dict, mRna_2);//

      if (amino_1 != amino_2){
        cout<<hammingDistance(strand_1 , strand_2)<<" "<<"yes"<<endl;
      }
      if (amino_1 == amino_2){
        cout<<hammingDistance(strand_1, strand_2)<<" "<<"no"<<endl;
      }
   }
  
   fin.close();

   dict.close();

   return 0;

}

char DNAbase_to_mRNAbase(char c)
{
     char corrected = toupper(c); 

    if (corrected == 'A'){

        return 'U';

    } 
    if (corrected == 'T'){

        return 'A';

    } 
    if (corrected == 'C'){

        return 'G';

    }  
    if (corrected == 'G'){

        return 'C';


    } 
    
} 

   string DNA_to_mRNA(string dna)
   {//

        string newMRNA;

        for(int i = 0; i < dna.length(); i++)
        {

            newMRNA += DNAbase_to_mRNAbase(dna[i]);

        }

        return newMRNA;

    }
    string dictionary_read(ifstream &dict, string base) 
    {
    string key, value;
    dict.clear(); 
    dict.seekg(0); 
    while (dict >> key >> value) 
    {
        if(key==base)
        {
            return value;
        }
    }
}


string mainAmino(ifstream &dict, string mRna) 
{
       bool startEncode=false;

       string amino;
            //cout<<mRna<<endl;

            for(int i=0; i<mRna.length(); i+=3)
            {//

                //cout << dictionary_read(dict, mRna.substr(i , 3));
                //cout << " ";
                if (dictionary_read(dict,mRna.substr(i,3))=="Met")
                {
                    startEncode = true;// does first comes Met 
                }
                if(dictionary_read(dict,mRna.substr(i,3))=="Stop")
                {
                    startEncode=false;//checks  codon hs break 
                }
                if(startEncode==true)
                {
                    amino = amino +dictionary_read(dict, mRna.substr(i , 3));
                }

                
            }
            return amino;
} 
int hammingDistance(string a, string b)
{
  int hamming = 0;
  for (int i = 0; i <a.length(); i++){
    if (a[i] !=b[i]){
      hamming+=1;
    }
  }
  return hamming;
}  
