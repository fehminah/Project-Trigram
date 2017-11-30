#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;

//helper function
vector<string> helperfunction(string seq) {
    vector<string> frequency;
    string newSeq;
    for (int j = 0; j <= 2; j++){
      for (int i = j; i < (int)seq.length(); i+=3){
        newSeq = seq.substr(i,3);
      }
        frequency.push_back(newSeq);
    }
    return frequency;
}

vector<int> freqS(){
    vector<int> freq;
    for(unsigned int i = 0; i < 19682; i++){
        freq[i] = 0;
    }
    return freq;
}

vector<string> helper(string frequency) {
    vector<int> grrr;
    for(int i = 0; i < (int)frequency.length(); i++){
        int moo = atoi(frequency[i]) * 27^2 + atoi(frequency[i+1])*27 + atoi(frequency[i+2]);
    }
    grrr.push_back(moo);
    return grrr;
}

int trigram(string language){
    int meow = 0;
    vector<string> woof = helperfunction(language);
    vector<int> auuu = freqS();
    for(int i = 0; i < (int)language.length(); i++){
        if (woof[i] == auuu[i]){
            auuu += 1;
        }
    }
    return
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

//trigram, freqS
//main
