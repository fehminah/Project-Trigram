#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

//helper function
vector<string> helperfunction() {
    vector<string> frequency;
    string newSeq;
    string codon;
    string addAA;
    for (int j = 0; j <= 2; j++){
      codon = "";
      //i and j start at the index. Go through entire instance variable (seq) and chuck them by 3's
      for (int i = j; i < (int)seq.length(); i+=3){
        //get substring from index i to 2 indexes after (ie start(0) 1 2)
        newSeq = seq.substr(i,3);
        //get the amino acid from helper function
        addAA = translator(newSeq);
        //if it's not a valid codon (a stop/invalid codon) terminate loop
        if (addAA == "") break;
        //adds amino acids together from same loop (ie when i & j = 0)
        else codon += addAA;
      }
      //when going through same loop, if there are amino acids
      if(codon != ""){
        //chunk together all of the amino acids from same loop and append to a vector
        frequency.push_back(codon);
      }
    }
    return frequency;
}

//vector of 27^3
vector<int> freqS(){
    for(unsigned int i = 0; i < 19682; i++){
        vector<int> freq;
        freq[i] = 0;
    }
}

int trigram(language){
    int meow = 0;
    vector<string> woof = helperfunction();
    vector<int> auuu = freqS();
    for(int i = 0; i < (int)language.length(); i++){
        if woof[i] == auuu[i]{
            meow += 1;
        }
    }
}

double distance(double *pointA, double *pointB, unsigned int lvec)
{
    double x = 0.0, y = 0.0, z = 0.0 ;
     for(unsigned int i = 0; i < lvec; i++) {
        x += pointA[i] * pointB[i] ;]
        y += pointA[i] * pointA[i] ;
        z += pointB[i] * pointB[i] ;
    }
    return x / (sqrt(y) * sqrt(z)) ;
}

//distance needs to completed
// compile script
//main
