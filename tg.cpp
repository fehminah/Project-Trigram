//Name: Eunice Arokiadoss and Fehmina Hasan

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>
#include "tg.h"
using namespace std;

//contructor
Lang::Lang(string language){
    freq = new int[len]; //variable that initializes the array
    trigram(language);
}

//destructor
Lang::~Lang(){
    delete[] freq;
}

//"thisismeow"
//void function that adds 1 to the index in an array
void Lang::trigram(string language){
    int trigrams = 0;
    for(int i = 0; i < (int)language.length()-2; i++){
        trigrams = 0;
        if(language[i] == ' '){
            trigrams += 0;
        }
        else{
            trigrams += (int)((language[i]-96) * (27*27));
        }
        if(language[i+1] == ' '){
            trigrams += 0;
        }
        else{
            trigrams += (int)((language[i+1]-96) * (27));
        }
        if(language[i+2] == ' '){
            trigrams += 0;
        }
        else{
            trigrams += (int)((language[i+2]-96));
        }
        freq[trigrams]++;
    }
}

//void print function used to print out the frequency of each trigram in the array
void Lang::print() {
    for(int i = 0; i <len; i++){
        cout<<freq[i]<< " ";
    }
    cout<<endl;
}
