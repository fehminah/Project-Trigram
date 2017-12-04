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

//void function that adds 1 to the index in an array
void Lang::trigram(string language){
    for(int i = 0; i < (int)language.length()-2; i++){
        int trigram = 0;
        trigram += (language[i]-96) * 27^2;
        trigram += (language[i+1]-96) * 27;
        trigram += (language[i+2]-96);
        freq[trigram]++;
    }
}

//void print function used to print out the frequency of each trigram in the array
void Lang::print() {
    for(int i = 0; i <len; i++){
        cout<<freq[i]<< " ";
    }
    cout<<endl;
}
