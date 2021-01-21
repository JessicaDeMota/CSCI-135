/*
Author:Jessica De Mota Munoz
Course: CSCI-136
Instructor: Mr.Maryash
Assignment:PROJECT 2D
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
void frameshift(ifstream &dict, string mRna, int index);


int main()
{
   ifstream fin("frameshift_mutations.txt");
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

   while(getline(fin, strand_1)){

      getline(fin,  strand_2);

      string mRna = DNA_to_mRNA(strand_1);//
      string mutatedProtein = DNA_to_mRNA(strand_2);//

      int started = mutatedProtein.find("AUG", 0);
      frameshift(dict, mRna, 0);
      frameshift(dict, mutatedProtein, started);

      
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

   string DNA_to_mRNA(string dna){//

        string newMRNA;

        for(int i = 0; i < dna.length(); i++){

            newMRNA += DNAbase_to_mRNAbase(dna[i]);

        }

        return newMRNA;

    }
    string dictionary_read(ifstream &dict, string base) {
    string key, value;
    dict.clear();
    dict.seekg(0);
    while (dict >> key >> value) {
        if(key==base){
            return value;
        }
    }
}


string mainAmino(ifstream &dict, string mRna) {
       bool startEncode=false;

       string amino;
            //cout<<mRna<<endl;

            for(int i=0; i<mRna.length(); i+=3){//

                //cout << dictionary_read(dict, mRna.substr(i , 3));
                //cout << " ";
                if (dictionary_read(dict,mRna.substr(i,3))=="Met"){
                    startEncode = true;// does first comes Met
                }
                if(dictionary_read(dict,mRna.substr(i,3))=="Stop"){
                    startEncode=false;//checks  codon hs break
                }
                if(startEncode==true)
                {
                    amino = amino + dictionary_read(dict, mRna.substr(i , 3));
                }

                
            }
            return amino;
}
int hammingDistance(string a, string b){//
  int hamming = 0;
  for (int i = 0; i < a.length(); i++){//
    if (a[i] !=b[i]){
      hamming+=1;
    }
  }
  return hamming;
}



void frameshift(ifstream &dict, string mRna, int index){

  
            bool startEncode=false;
            int met = 0;

            for(int i=index; i<mRna.length(); i+=3){//
              if (met<=1){

                //cout << dictionary_read(dict, mRna.substr(i , 3));
                //cout << " ";
                if (dictionary_read(dict,mRna.substr(i,3))=="Met"){
                    startEncode = true;
                    met += 1;
                }
                if((dictionary_read(dict,mRna.substr(i,3))=="Stop")||(met>1)){
                    startEncode=false;
                }
                if(startEncode==true)
                {
                    cout<<dictionary_read(dict,mRna.substr(i,3));
                }
                if((startEncode==true) && dictionary_read(dict,mRna.substr((i + 3),3)) !="Stop"){
                    cout<<"-";
                }

              }

            }
                cout<<endl;
            

    }
